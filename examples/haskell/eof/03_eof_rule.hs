-- Generated by re2hs
{-# LANGUAGE RecordWildCards #-}
#1 "haskell/eof/03_eof_rule.re"
-- re2hs $INPUT -o $OUTPUT
{-# OPTIONS_GHC -Wno-unused-record-wildcards #-}
{-# LANGUAGE OverloadedStrings #-}

import Control.Monad (when)
import qualified Data.ByteString as BS
import Data.Word

data State = State {
    _yyinput :: BS.ByteString,
    _yycursor :: Int,
    _yymarker :: Int,
    _yylimit :: Int,
    _count :: Int
}

-- expect a null-terminated string

#23 "haskell/eof/03_eof_rule.hs"
yy0 :: State -> Int
yy0 State{..} =
    let yych = BS.index _yyinput _yycursor in
    case yych of
        _c | 0x20 == _c ->
            let __ = _yycursor + 1 in let _yycursor = __ in
            yy3 State{..}
        _c | 0x27 == _c ->
            let __ = _yycursor + 1 in let _yycursor = __ in
            yy5 State{..}
        _c | True ->
            if _yycursor >= _yylimit then
                yy10 State{..}
            else
                let __ = _yycursor + 1 in let _yycursor = __ in
                yy1 State{..}

yy1 :: State -> Int
yy1 State{..} =
    yy2 State{..}

yy2 :: State -> Int
yy2 State{..} =
#27 "haskell/eof/03_eof_rule.re"
    (-1)
#49 "haskell/eof/03_eof_rule.hs"

yy3 :: State -> Int
yy3 State{..} =
    let yych = BS.index _yyinput _yycursor in
    case yych of
        _c | 0x20 == _c ->
            let __ = _yycursor + 1 in let _yycursor = __ in
            yy3 State{..}
        _c | True ->
            yy4 State{..}

yy4 :: State -> Int
yy4 State{..} =
#30 "haskell/eof/03_eof_rule.re"
    lexer State{..}
#65 "haskell/eof/03_eof_rule.hs"

yy5 :: State -> Int
yy5 State{..} =
    let _yymarker = _yycursor in
    let yych = BS.index _yyinput _yycursor in
    if yych <= 0x00 then
        if _yycursor >= _yylimit then
            yy2 State{..}
        else
            let __ = _yycursor + 1 in let _yycursor = __ in
            yy6 State{..}
    else
        yy7 State{..} yych

yy6 :: State -> Int
yy6 State{..} =
    let yych = BS.index _yyinput _yycursor in
    yy7 State{..} yych

yy7 :: State -> Word8 -> Int
yy7 State{..} yych =
    case yych of
        _c | 0x27 == _c ->
            let __ = _yycursor + 1 in let _yycursor = __ in
            yy8 State{..}
        _c | 0x5C == _c ->
            let __ = _yycursor + 1 in let _yycursor = __ in
            yy9 State{..}
        _c | True ->
            if _yycursor >= _yylimit then
                yy11 State{..}
            else
                let __ = _yycursor + 1 in let _yycursor = __ in
                yy6 State{..}

yy8 :: State -> Int
yy8 State{..} =
#29 "haskell/eof/03_eof_rule.re"
    lexer State{_count = _count + 1, ..}
#105 "haskell/eof/03_eof_rule.hs"

yy9 :: State -> Int
yy9 State{..} =
    let yych = BS.index _yyinput _yycursor in
    if yych <= 0x00 then
        if _yycursor >= _yylimit then
            yy11 State{..}
        else
            let __ = _yycursor + 1 in let _yycursor = __ in
            yy6 State{..}
    else
        let __ = _yycursor + 1 in let _yycursor = __ in
        yy6 State{..}

yy10 :: State -> Int
yy10 State{..} =
#28 "haskell/eof/03_eof_rule.re"
    _count
#124 "haskell/eof/03_eof_rule.hs"

yy11 :: State -> Int
yy11 State{..} =
    let _yycursor = _yymarker in
    yy2 State{..}

lexer :: State -> Int
lexer State{..} =
    yy0 State{..}

#31 "haskell/eof/03_eof_rule.re"


main :: IO ()
main = do
    let test s n = do
            let st = State {
                    _yyinput = s,
                    _yycursor = 0, 
                    _yymarker = 0,
                    _yylimit = BS.length s - 1, -- terminating null not included
                    _count = 0}

            when (lexer st /= n) $ error "failed"

    test "\0" 0
    test "'qu\0tes' 'are' 'fine: \\'' \0" 3
    test "'unterminated\\'\0" (-1)
