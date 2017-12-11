#include <stdio.h>

int main(){
	int sayi, ms;
	printf("\n\tBir sayi giriniz: ");
	scanf("%d",&sayi);
	ms=mukemmelSayi(sayi);	
	if(ms==1) printf("\n\tSayi mukemmeldir....");
	else 	  printf("\n\tSayi mukemmel degildir..........");

}

int mukemmelSayi(int a){
	int i=1, toplam=0;
	for(i=1;i<a;i++){
		if(a%i==0) 
			toplam+=i;
	} 
	if(toplam==a) return 1;
	return 0;
}
