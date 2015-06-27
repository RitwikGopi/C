

#include <stdio.h>

int power(int a, int b){
	int i,r=1;
	for(i=0;i<b;i++)
		r*=a;
	return(r);
}

main(){
	int x=5,y=0;
	printf("\n%d\n",power(x,y));
}
