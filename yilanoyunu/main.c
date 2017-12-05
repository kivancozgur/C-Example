#include <stdio.h>
    #include <stdlib.h>
        #include <time.h>
            #include <windows.h>
                #include <conio.h>


int uzunluk=50; yukseklik=20;
    int yilanX,yilanY;
        int fareX,fareY;
            int oyunabasla=0;
                int toplam=0;
                    int kuyrukN,kuyrukX[100],kuyrukY[100];
                        enum YON{SOL=1,SAG,YUKARI,ASAGI}yonler;


int main(){
    srand(time(NULL));
        basla();
            while(oyunabasla){
                kontrol();
                    hareket();
                        grafik();
                            Sleep(60);
            }
}



void grafik(){
    system("cls");
        int i,j;
            printf("\n\t.......Yilan Oyununa Hosgeldiniz.......\n");
                for(i=0;i<yukseklik;i++){
                    printf("\t");
                        for(j=0;j<uzunluk;j++){
                            if(i==0||j==0||i==yukseklik-1||j==uzunluk-1)
                                printf("#");
                                    else if (i==yilanY && j==yilanX) printf("O");
                                        else if (i==fareY && j==fareX) printf("o");
                                            else{
                                                int boslukbas=0;
                                                    for (int k = 0; k < kuyrukN; k++) {
                                                        if (kuyrukX[k]==j && kuyrukY[k]==i){
                                                            printf("O");
                                                                boslukbas=1;
                                                        }
                                                    }
                                                            if(!boslukbas) printf(" ");
                                            }
                        }
                        printf("\n");
                }
        printf("\n\tTOPLAM PUAN = %d",toplam);
}


void basla(){
    oyunabasla=1;
        yilanX=uzunluk/2;
            yilanY=yukseklik/2;
                fareX=1+rand()%(uzunluk-2);
                    fareY=1+rand()%(yukseklik-2);
}


void kontrol(){
    if(kbhit()){
        switch (getch()){
            case 75:
                yonler=SOL;
                break;
            case 77:
                yonler=SAG;
                break;
            case 72:
                yonler=YUKARI;
                break;
            case 80:
                yonler=ASAGI;
                break;
        }
    }
}



void hareket(){
    for (int i = kuyrukN-1; i > 0 ; i--) {
        kuyrukX[i]=kuyrukX[i-1];
            kuyrukY[i]=kuyrukY[i-1];
    }
        kuyrukX[0]=yilanX;
            kuyrukY[0]=yilanY;
                switch (yonler){
                    case SOL:
                        yilanX--;
                        break;
                    case SAG:
                        yilanX++;
                        break;
                    case YUKARI:
                        yilanY--;
                        break;
                    case ASAGI:
                        yilanY++;
                        break;
                }
                    if(yilanX==0)           yilanX=uzunluk-2;
                        if (yilanX==uzunluk-1)  yilanX=1;
                            if(yilanY==0)           yilanY=yukseklik-2;
                                if (yilanY==yukseklik-1)  yilanY=1;
                                    if(yilanX==fareX && yilanY==fareY){
                                        toplam+=10;
                                            kuyrukN++;
                                                fareX=1+rand()%(uzunluk-2);
                                                    fareY=1+rand()%(yukseklik-2);
                                    }
}