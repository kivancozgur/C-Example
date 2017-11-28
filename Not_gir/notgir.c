#include <stdio.h>
	int main(){
		
		int ogrsay,giren,i=1;
				float ogrnot=0,ort;
					do{
						printf("\n%d .Ogrencinin Notu :",i);
					
							scanf("%f",&ogrnot);
							
								if(ogrnot==0){
									ogrsay++;
								}
								
								if(ogrnot<-1 || ogrnot>100){
									printf("\nLutfen 0 ile 100 arasinda not girisi yapin\n");
								}
								
								else{
									
									if(ogrnot!=-1){			
										i++;
										ort+=ogrnot;															
									}
										
								else{
										i--;//-1 ÝÇÝN
										giren=i-ogrsay;
										ort=ort/giren;
										printf("\nSinava giren ogrenci sayisi : %d",giren);
										printf("\nSinava girmeyeyen ogrenci sayisi : %d",ogrsay);
										printf("\nSinavin ortalamasi : %.2f",ort);
										break;
									}
								}						
						}
			
			while(ogrnot!=-1);
	
		
	}
