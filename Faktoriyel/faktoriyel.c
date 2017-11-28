#include <stdio.h>
	
	int main(){
		
			int sayi=1,fakto=1,i=1;
				
				do{
					printf("Pozitif deger giriniz : ");
					scanf("%d",&sayi);
					if(sayi<0) printf("Hatali Giris \n\n");
				}	
				while(sayi<0);
					if(sayi==0) fakto=1;
			
							for(i;i<sayi;i++){
						 	fakto=sayi*i;
						 	
						}
	printf("\n\t%d!= %d ",sayi,fakto);
	}
