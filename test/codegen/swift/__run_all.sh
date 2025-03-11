#!/bin/sh

root_dir=$(pwd)

for f in $(find . -name '*.re'); do
    grep -q 'func main' $f || continue # skip incomplete tests

    cd $(dirname $f)

    swiftfile="$(basename ${f%.re}.swift)"
    swifttest="example.swift"

    [ -f "$swiftfile" ] || { echo "\"$swiftfile\" doesn't exist"; exit 1; }

    cat "$swiftfile" \
        | grep -E -v "warning: rule .*matches empty string \[-Wmatch-empty-string\]" \
        | grep -E -v 'warning: tag .* degree of nondeterminism \[-Wnondeterministic-tags\]' \
        > "$swifttest"

    # If the autogenerated message appears more than once in the file, then
    # it must have autogenerated header appended at the end. Cut it off.
    msg='Generated by re2swift'
    if [ $(grep -c "$msg" "$swifttest") -gt 1 ]; then
        # Get the line of the second message occurrence.
        l=$(grep -n "$msg" "$swifttest" | tail -n +2 | cut -d : -f 1)
        # Cut off everything past that line.
        head -n $l "$swifttest" > "$swifttest".mod && mv "$swifttest".mod "$swifttest"
    fi

    echo "${f#'./'}"
    swiftc -g -parse-as-library -o example "$swifttest" && ./example 2>/dev/null || { echo "*** error ***"; exit 1; }

    rm -f "$swifttest" example
    [ -d "example.dSYM" ] && rm -r example.dSYM
    cd $root_dir
done

echo "All good."
