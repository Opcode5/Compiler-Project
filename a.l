%{
	#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
	#include<math.h>
	#include "a.tab.h"
%}

alpha [a-zA-Z]
digit [0-9]
single		"comment"[:][a-zA-Z0-9\t ]*
multiple	"comment"[\n\t ]*"lb"[a-zA-Z0-9\n\t ]*"rb"
%%

{digit}+			{ yylval = atoi(yytext); 
					  return NUM; 
					}

switch 				{ return SWITCH; 				}
plus 				{ return PLUS;					}
minus 				{ return MINUS;					}
mul 				{ return MUL;					}
div 				{ return DIV; 					}
print		      	{ return PRINT;					}
factorial 			{ return FACTORIAL;				}
case		   		{ return CASE;  				} 
check_prime			{ return PRIME;					}
show_gcd 			{ return GCD;					}
show_lcm 			{ return LCM;					}
if 			   		{ return IF;  				 	}
else 		 		{ return ELSE; 					}
default 	 		{ return DEFAULT; 				}
"lb" 		 	  	{ return LB;	  				}
"rb"  		   		{ return RB;					}
"less_than"  		{ return LESS;					}
"greater_than"  	{ return GREATER;				}
for_loop 		   	{ return FOR;					}
while_loop 		   	{ return WHILE;					}
sin			   		{ return SIN;					}
cos           		{ return COS;					}
tan            		{ return TAN;					}		
log			   		{ return LOG;					}
binary 				{ return BINARY;				}
get_remainder		{ return REMAINDER;				}		
log10 		   		{ return LOG10;					}
bigmod  	   		{ return BIGMOD;				}
[-+/*<>=,():;%^]    {
					  yylval = yytext[0];
					  return *yytext;	
					}
integer  			{ return INT;					}
CHAR 		        { return CHAR;					}
FLOAT 			 	{ return FLOAT;					}
"my program ()"	    { return MAIN; 					}
"complete();"		{ return COMPLETE; 				}
{alpha}+{digit}*  	{
					  int val=0; 
					  for(int i=0;i<strlen(yytext);i++) val+=yytext[i]-'0';
					  yylval=val; 
					  return VAR; 
					}
{single}			{
					  printf("single line comment\n");
					}
{multiple} 			{
					  printf("multiple line comment\n");
					}

[\n]* 				{								}
[ ]*	    		{								}
[\t]*				{								}
. 					{								}
%%
int yywrap()
{
	return 1;
}
int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	yyparse();
    
	return 0;
}
