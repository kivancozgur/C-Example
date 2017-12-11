#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 16
int main(){
	int i;
	srand(clock());
	for(i=1;i<MAX;i++){
		printf(" %d ",1+rand()%6);
		if(i%5==0) putchar('\n');
	}
}
