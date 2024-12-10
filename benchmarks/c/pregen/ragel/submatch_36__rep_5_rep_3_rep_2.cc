#line 1 "../../../benchmarks/c/src/ragel/submatch_36__rep_5_rep_3_rep_2.rl"
#include "ragel/base.h"

namespace ragel_submatch_36__rep_5_rep_3_rep_2 {
	
	const char *delim = "\n";
	
	
#line 36 "../../../benchmarks/c/src/ragel/submatch_36__rep_5_rep_3_rep_2.rl"

	

#line 11 "gen/ragel/submatch_36__rep_5_rep_3_rep_2.cc"
static const int aaa_start = 6;
	static const int aaa_first_final = 6;
	static const int aaa_error = 0;
	
	static const int aaa_en_main = 6;
	
	
#line 38 "../../../benchmarks/c/src/ragel/submatch_36__rep_5_rep_3_rep_2.rl"

	
	static int lex(Input *in, int count) {
		char *p = in->p;
		char *pe = in->pe;
		const char *s;
		int cs;
		

#line 26 "gen/ragel/submatch_36__rep_5_rep_3_rep_2.cc"
	{
			cs = (int)aaa_start;
		}
		
#line 46 "../../../benchmarks/c/src/ragel/submatch_36__rep_5_rep_3_rep_2.rl"


#line 31 "gen/ragel/submatch_36__rep_5_rep_3_rep_2.cc"
{
			switch ( cs ) {
				case 6:
				goto st_case_6;
				case 0:
				goto st_case_0;
				case 1:
				goto st_case_1;
				case 2:
				goto st_case_2;
				case 3:
				goto st_case_3;
				case 4:
				goto st_case_4;
				case 5:
				goto st_case_5;
			}
			_ctr6:
				{
#line 16 "../../../benchmarks/c/src/ragel/submatch_36__rep_5_rep_3_rep_2.rl"
				
				OUTS(s, p);
				OUTC('.');
				s = p;
			}
			
#line 57 "gen/ragel/submatch_36__rep_5_rep_3_rep_2.cc"

				{
#line 33 "../../../benchmarks/c/src/ragel/submatch_36__rep_5_rep_3_rep_2.rl"
				OUTC('\n'); }
			
#line 62 "gen/ragel/submatch_36__rep_5_rep_3_rep_2.cc"

			goto _st6;
			_ctr9:
				{
#line 20 "../../../benchmarks/c/src/ragel/submatch_36__rep_5_rep_3_rep_2.rl"
				s = p; }
			
#line 69 "gen/ragel/submatch_36__rep_5_rep_3_rep_2.cc"

				{
#line 33 "../../../benchmarks/c/src/ragel/submatch_36__rep_5_rep_3_rep_2.rl"
				OUTC('\n'); }
			
#line 74 "gen/ragel/submatch_36__rep_5_rep_3_rep_2.cc"

			goto _st6;
			_st6:
			p+= 1;
			st_case_6:
			if ( p == pe )
				goto _out6;
			switch( ( (*( p))) ) {
				case 10: {
					goto _ctr9;
				}
				case 97: {
					goto _ctr10;
				}
			}
			goto _st0;
			_st0:
			st_case_0:
			goto _out0;
			_ctr7:
				{
#line 16 "../../../benchmarks/c/src/ragel/submatch_36__rep_5_rep_3_rep_2.rl"
				
				OUTS(s, p);
				OUTC('.');
				s = p;
			}
			
#line 102 "gen/ragel/submatch_36__rep_5_rep_3_rep_2.cc"

			goto _st1;
			_ctr10:
				{
#line 20 "../../../benchmarks/c/src/ragel/submatch_36__rep_5_rep_3_rep_2.rl"
				s = p; }
			
#line 109 "gen/ragel/submatch_36__rep_5_rep_3_rep_2.cc"

			goto _st1;
			_st1:
			p+= 1;
			st_case_1:
			if ( p == pe )
				goto _out1;
			if ( ( (*( p))) == 97 ) {
				goto _st2;
			}
			goto _st0;
			_st2:
			p+= 1;
			st_case_2:
			if ( p == pe )
				goto _out2;
			if ( ( (*( p))) == 97 ) {
				goto _st3;
			}
			goto _st0;
			_st3:
			p+= 1;
			st_case_3:
			if ( p == pe )
				goto _out3;
			if ( ( (*( p))) == 97 ) {
				goto _st4;
			}
			goto _st0;
			_st4:
			p+= 1;
			st_case_4:
			if ( p == pe )
				goto _out4;
			if ( ( (*( p))) == 97 ) {
				goto _st5;
			}
			goto _st0;
			_st5:
			p+= 1;
			st_case_5:
			if ( p == pe )
				goto _out5;
			switch( ( (*( p))) ) {
				case 10: {
					goto _ctr6;
				}
				case 97: {
					goto _ctr7;
				}
			}
			goto _st0;
			_out6: cs = 6; goto _out; 
			_out0: cs = 0; goto _out; 
			_out1: cs = 1; goto _out; 
			_out2: cs = 2; goto _out; 
			_out3: cs = 3; goto _out; 
			_out4: cs = 4; goto _out; 
			_out5: cs = 5; goto _out; 
			_out: {}
		}
		
#line 47 "../../../benchmarks/c/src/ragel/submatch_36__rep_5_rep_3_rep_2.rl"

		
		in->p = p;
		in->pe = pe;
		
		return count;
	}
	
	RAGEL_BENCH()
	RAGEL_TEST()
	
} // namespace ragel_submatch_36__rep_5_rep_3_rep_2
