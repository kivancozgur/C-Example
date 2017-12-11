#include <stdio.h>

int main( ) 
{
	int sayi, giris, a,i,j,mod;
	do{
		sayi=0;
		a=1;
		printf( "bir sayi giriniz " ); 
		scanf( "%d", &sayi );

		for(i=0;;i++){
			if((sayi/a) <1.0) 
				break;
			a *= 10;	
		}
	
		for(j=1;j<=i;j++){		
			mod = sayi%10;
			sayi -= mod;
			sayi /= 10;
			printf("%d",mod);
		}
		printf("\n\ndevam :1 -2\n");
		scanf("%d", &giris);
}while(giris==1);

	return 0;
}


