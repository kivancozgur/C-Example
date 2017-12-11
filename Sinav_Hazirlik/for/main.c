#include <stdio.h>

int main() {
    int n1,say,i;
    printf("\n\t100'den buyuk bir sayi girin : ");
    scanf("%d",&n1);
    if(n1<=100){
        printf("\n\tYeniden Sayi Girin : ");
        scanf("%d",&n1);
    }
    else{
        for(i=0;i<n1;i++){
            say=i%n1;
            if(say==0){
                printf("%d",i);
            }
            else{
                printf("SSS");
            }
        }
    }
}
