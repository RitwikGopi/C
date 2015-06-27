/*******************************************************************************
  	PROGRAM TO COUNT LINES WORDS AND CHARACTERS IN A PARAGRAPH
 ******************************************************************************/

#include <stdio.h>

main(){
	int c,w,l,ch,state=0;
	w=l=ch=0;
	while((c=getchar())!=EOF){
		ch++;
		if(c=='\n')
			l++;
		if(c=='\n' || c=='\t' || c==' '){
			state=0;
		}
		else if(state==0){
			state=1;
			w++;
		}
	}
	printf("\nNumber of LINES=%d WORDS=%d CHARACTERS=%d\n",l,w,ch);
}
