%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>
	int data[5000];
	int bit[100]; 
	int c=0; 
%}


%token NUM VAR IF ELSE MAIN INT FLOAT CHAR LB RB SWITCH CASE DEFAULT BREAK FOR  COMPLETE LCM LESS GREATER
%token PRINT SIN COS TAN LOG BIGMOD LOG10  BINARY FACTORIAL PRIME GCD PLUS MINUS DIV MUL REMAINDER WHILE
%nonassoc IFX
%nonassoc ELSE
%nonassoc SWITCH
%nonassoc CASE
%nonassoc DEFAULT
%left LESS GREATER
%left PLUS MINUS
%left MUL DIV


%%

program: MAIN  LB cstatement RB
	 ;

cstatement: 

	| cstatement statement
	;

statement: ';'	
	| declaration ';'		{ }

	| expression ';' 		{ }
	|VAR '=' expression ';' { 
								data[$1] =$3; 
								printf("Value of the variable: %d\t\n",$3);
								$$=$3;
							} 			
						
   
	| FOR '(' NUM ',' NUM ',' NUM ')' LB VAR '=' expression MINUS expression';' RB 
							{
								printf("\n");
								int i;
								printf("loop:\n");
								for(i=$3 ; i<$5 ; i+=$7) 
								{
									data[$10]-=$14; 
									printf("i= %d and value inside loop is %d\n",i,data[$10]);
								}
							}
	| WHILE '(' VAR GREATER NUM ')' LB VAR '=' expression MINUS NUM ';' RB 
							{
								printf("\n");
								int temp=data[$3]; 
								while(temp)
								{
									temp-=$12; 
									data[$3]-=$12;
									printf("value inside while loop = %d\n",data[$3]);
								}
								
							}
	| WHILE '(' VAR LESS NUM ')' LB VAR '=' expression PLUS NUM ';' RB 
							{
								printf("\n");
								int temp=data[$3]; 
								while(temp<$5)
								{
									temp+=$12; 
									data[$3]+=$12;
									printf("value inside while loop = %d\n",data[$3]);
								}
								
							}
	| SWITCH LB case  RB
	| REMAINDER '(' expression '%' expression ')'
							{
								printf("value of (%d %c %d) is %d\n",$3,'%',$5,$3%$5);
							}
	| IF '(' expression ')' LB VAR '=' expression MUL expression ';' RB
							{
								
								if($3)
								{
									data[$6]*=$10; 
									printf("\nvalue of expression in IF: %d\n",data[$6]);
								}
								else
								{
									printf("condition value zero in IF block\n");
								}
							}

	| IF '(' expression ')' LB  VAR '=' expression MUL expression ';' RB ELSE LB VAR '=' expression DIV expression ';' RB 
							{
		
								if($3)
								{
									data[$6]*=$10; 
									printf("value of expression in IF: %d\n",data[$6]);
								}
								else
								{
									if($19==0)
									{
										printf("division by zero is not possible\n"); 
									}
									else 
									{
										data[$15]/=$19; 
										printf("value of expression in ELSE: %d\n",data[$15]);	
									}
								}
							}
	|COMPLETE 				{
								printf("successful compilation!!!");
							}
	| PRINT '(' expression ')' ';' 
							{
								printf("Print Expression %d\n",$3);
							}	
	| FACTORIAL '(' expression ')' ';' 
							{
								int fact=1; 
								for(int i=1;i<=$3;i++) fact*=i; 
								printf("value of %d! is %d\n",$3,fact); 
							}
	| PRIME '(' expression ')' ';' 
							{
	
								int ck=0; 
								for(int i=2;i<$3;i++)
								{
									if($3%i==0) ck=1; 
								}
								if(ck) printf("%d is not a prime number\n",$3);
								else printf("%d is a prime number\n",$3);
							}
	| GCD '(' expression ',' expression ')' ';'
							{
								int temp=$3; 
								if($5<temp) temp=$5; 
								for(int i=temp;i>=1;i--)
								{
									if($3%i==0 && $5%i==0)
									{
										
										printf("gcd of %d and %d is %d\n",$3,$5,i);
										break; 
									}
								}				
							}
	| LCM '(' expression ',' expression ')' ';'
							{
								int temp=$3; 
								if($5>temp) temp=$5; 
								for(int i=temp;i;i++)
								{
									if(i%$3==0 && i%$5==0)
									{
										printf("lcm of %d and %d is %d\n",$3,$5,i);
										break; 
									}
								}				
							}
	
	;
	
case: case aa
	|aa
	;
aa: CASE '(' expression LESS expression ')' ':' VAR '=' expression ';'
							{
								if($3<$5)
								{
									data[$8]=$10; 
									c=1; 
								}
							}
	| CASE '(' expression GREATER expression ')' ': 'VAR '=' expression ';'
							{
								if($3>$5 && c==0)
								{
									data[$8]=$10; 
									c=2;
								}
							}
	| DEFAULT ':' VAR '=' expression ';'
							{
								if(c==0)
								{
									data[$3]=$5; 
									c=3;  
								}
							}
	;
	

declaration : TYPE ID1   
             ;

TYPE : INT   
     | FLOAT  
     | CHAR   
     ;
ID1 : 
	
	| ID1 ',' VAR  '=' NUM 	{ 
								data[$3] =$5; 
								printf("Value of the variable: %d\t\n",$5);
								$$=$3;
							} 
	|ID1 ',' VAR  
	| VAR
	| VAR  '=' NUM 			{ 
								data[$1] =$3; 
								printf("Value of the variable: %d\t\n",$3);
								$$=$3;
							} 
    ;

expression: NUM				{ $$ = $1; 	}

	| VAR					{ $$ = data[$1]; }
	
	| expression PLUS expression	{ $$ = $1 + $3; }

	| expression MINUS expression	{ $$ = $1 - $3; }

	| expression MUL expression	{ $$ = $1 * $3; }

	| expression DIV expression	{ 
									if($3)
									{
										$$ = $1 / $3;
				  					}
				  					else
				  					{
										$$ = 0;
										printf("\ndivision by zero\t");
				  					} 	
				    			}
	| expression '^' expression	{ $$ = pow($1 , $3);}
	| expression LESS expression	{ $$ = $1 < $3; }
	
	| expression GREATER expression	{ $$ = $1 > $3; }

	| '(' expression ')'		{ $$ = $2;	}
	| SIN expression 			{
									printf("Value of Sin(%d) is %lf\n",$2,sin($2*3.1416/180)); $$=sin($2*3.1416/180);
								}

    | COS expression 			{
									printf("Value of Cos(%d) is %lf\n",$2,cos($2*3.1416/180)); $$=cos($2*3.1416/180);
								}

    | TAN expression 			{
									printf("Value of Tan(%d) is %lf\n",$2,tan($2*3.1416/180)); $$=tan($2*3.1416/180);
								}

    | LOG10 expression 			{
									printf("Value of Log10(%d) is %lf\n",$2,(log($2*1.0)/log(10.0))); $$=(log($2*1.0)/log(10.0));
								}
	| LOG expression 			{
									printf("Value of Log(%d) is %lf\n",$2,(log($2))); $$=(log($2));
								}
	|BIGMOD '(' expression ',' expression ',' expression ')' 
								{
									long long res = 1;
									long long a = $3;
									long long b= $5;
									long long m=$7;
									while ( b )
									{
										if (b%2== 1) 
										{
											res = ( res * a ) % m;
										}
										a = ( a * a ) % m;
										b = b/ 2;
									}
									printf("Bigmod of %d ^ %d mod %d is = %lld\n",$3,$5,$7,res);
									$$=res;
								}
	| BINARY expression			{
									int val=$2;
									int cnt=0; 
									while(val)
									{
										bit[cnt]=val%2; 
										cnt++; 
										val/=2; 
									}
									printf("binary expression of %d  is ",$2);
									for(int i=cnt-1;i>=0;i--) printf("%d",bit[i]); 
									printf("\n"); 
								}
	;
%%


yyerror(char *s){
	printf( "%s\n", s);
}
