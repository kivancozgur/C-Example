#include <stdio.h>
	#include <math.h>	
		#include <stdlib.h>
			#include <conio.h>

				int s1,s2,i,toplam=0,carpim=1;
				float adet,aritmetikort,geometrikort;
			int main(){
				printf("\n\tKac adet sayi girilecek : ");
				scanf("%f",&adet);
				for(i=1;i<=adet;i++){
				printf("\n\tsayi%d : ",i);
				scanf("%d",&s1);
				toplam+=s1;
				carpim*=s1;
				}
				
				aritmetik();
				geometrik();
				if(getch()=='-'){
				printf("\n\tAritmetik Ortalama (%d / %.0f): %.2f",toplam,adet,aritmetikort);
				printf("\n\tGeometik Ortalama (pow(%d,(1 / %.0f))) : %.2f",carpim,adet,geometrikort);
			}
			}
			
			void aritmetik(){
				aritmetikort=toplam/adet;
			}
			
			void geometrik(){
				geometrikort=pow(carpim,(1/adet));
			}
