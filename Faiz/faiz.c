#include <stdio.h>
#include <math.h>
	int main(){
		
	int yil;
		float birikim=0.0, anapara, faiz;
		do{
			printf("\n\tYatirmak istediginiz tutar: ");
			scanf("%f",&anapara);
			if(anapara<0) printf("\n\tAnapara negatif olamaz");
		}while(anapara<0);
		
		do{
			printf("\n\tYil degeri : ");
			scanf("%d",&yil);
			if(yil<0) printf("\n\tYil negatif olamaz");
		}while(yil<0);

	
		do{
			printf("\n\tFaiz oranini girin: ");
			scanf("%f",&faiz);
			if(faiz<0.05||faiz>0.06) printf("\n\t0.05-0.06 arasinda bir deger girin\n");
		}while(faiz<0.05||faiz>0.06);
		int i;
		for(i=1;i<=yil;i++){
			birikim=anapara*pow(1+faiz,i);
			printf("%d. yil sonunda birikiminiz = \t%.2f\n",i,birikim);
		}
	}
