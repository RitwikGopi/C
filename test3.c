/*******************************************************************************
  	PROGRAM TO PRINT WORDS OF A PARA IN SEPERATE LNES
 ******************************************************************************/

#include <stdio.h>

main(){
	int c;
	while((c=getchar())!=EOF){
		
		if(c=='\n' || c=='\t' || c==' '){
			putchar('\n');
		}
		else
			putchar(c);
	}
	
	//printf("\nNumber of LINES=%d WORDS=%d CHARACTERS=%d\n",l,w,ch);
}
