#include <stdio.h>

int main() {
    int sayi1,sayi2,sonuc;
    printf("Hesap Makinasi \n\n");
    printf("1- Toplama \n");
    printf("2- Cikarma \n");
    printf("3- Carpma \n");
    printf("4- Bolme \n");
    printf("\n Lutfen Yapmak Istediginiz Islemi Secin : ");

    int secim;
    scanf("%d",&secim);
    if(secim==1)
    {
        sonuc=sayi1+sayi2;

        printf("1.Sayiyi Giriniz :  \n");
        scanf("%d",&sayi1);
        printf("2.Sayiyi Giriniz :  \n");
        scanf("%d",&sayi2);
        printf("Sonuc : %d",sonuc);
    }
    else if(secim==2)
    {
        sonuc=sayi1-sayi2;

        printf("1.Sayiyi Giriniz :  \n");
        scanf("%d",&sayi1);
        printf("2.Sayiyi Giriniz :  \n");
        scanf("%d",&sayi2);
        printf("Sonuc : %d",sonuc);
    }
    else if(secim==3)
    {
        sonuc=sayi1*sayi2;

        printf("1.Sayiyi Giriniz :  \n");
        scanf("%d",&sayi1);
        printf("2.Sayiyi Giriniz :  \n");
        scanf("%d",&sayi2);
        printf("Sonuc : %d",sonuc);
    }
    else if(secim==4)
    {
        sonuc=sayi1/sayi2;
        printf("1.Sayiyi Giriniz :  \n");
        scanf("%d",&sayi1);
        printf("2.Sayiyi Giriniz :  \n");
        scanf("%d",&sayi2);
        printf("Sonuc : %d",sonuc);
    }
    else {
        printf("HATALI SEÇİM YAPTINIZ!!!");
    }


    return 0;
}