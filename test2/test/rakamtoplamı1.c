#include <stdio.h>

void binlikc (int);
void yüzlükc (int);
void onlukc (int);
void birlikc (int);

int main(){
    int sayı,b1,b2,b3,b4;

    while (sayı!=-1){
        printf ("4 basamaklı bir sayı giriniz: \n");
        scanf("%d", &sayı);
        if(sayı==-1){
            break;
        }

        b1=sayı%10;
        b2=(sayı%100)/10;
        b3=(sayı%1000)/100;
        b4=(sayı%1000);

        if (b4!=1){
            binlikc(b4);
            printf ("BİN ");
        }

        if (b3!=0){
            yüzlükc(b3);
            printf ("YÜZ ");
        }else{
            printf(" ");
        }

        if (b2!=0){
            onlukc(b2);
        }else{
            printf (" ");
        }

        if (b1!=0){
            birlikc(b1);
        }else{
            printf (" ");
        }
        printf ("\n\n");
    }
return 0;
}  

void binlikc (int sayı){
    switch (sayı){
        case 2:
            printf ("İKİ ");
            break;
            
        case 3:
            printf ("ÜÇ ");
            break;

        case 4:
            printf ("DÖRT ");
            break;

        case 5:
            printf ("BEŞ ");
            break;

        case 6:
            printf ("ALTI ");
            break;

        case 7:
            printf ("YEDİ ");
            break;

        case 8:
            printf ("SEKİZ ");
            break;

        case 9:
            printf ("DOKUZ ");
            break;

    }
}

void yüzlükc (int sayı){
    switch (sayı){
        case 1:
            printf (" ");
            break;
        
        case 2:
            printf ("İKİ ");
            break;
        
        case 3:
            printf ("ÜÇ ");
            break;
        
        case 4:
            printf ("DÖRT ");
            break;
        
        case 5:
            printf ("BEŞ ");
            break;
        
        case 6:
            printf ("ALTI ");
            break;

        case 7:
            printf ("YEDİ ");
            break;
        
        case 8:
            printf ("SEKİZ ");
            break;

        case 9:
            printf ("DOKUZ ");
            break;
    }

}
        
void onlukc (int sayı){
    switch (sayı){
        case 1:
            printf ("ON ");
            break;
        
        case 2:
            printf ("YİRMİ ");
            break;
        
        case 3:
            printf ("OTUZ ");
            break;
        
        case 4:
            printf ("KIRK ");
            break;
        
        case 5:
            printf ("ELLİ ");
            break;
        
        case 6:
            printf ("ALTMIŞ ");
            break;

        case 7:
            printf ("YETMİŞ ");
            break;
        
        case 8:
            printf ("SEKSEN ");
            break;

        case 9:
            printf ("DOKSAN ");
            break;
    }

}
void birlikc (int sayı){
    switch (sayı){
        case 1:
            printf ("BİR ");
            break;
        
        case 2:
            printf ("İKİ ");
            break;
        
        case 3:
            printf ("ÜÇ ");
            break;
        
        case 4:
            printf ("DÖRT ");
            break;
        
        case 5:
            printf ("BEŞ ");
            break;
        
        case 6:
            printf ("ALTI ");
            break;

        case 7:
            printf ("YEDİ ");
            break;
        
        case 8:
            printf ("SEKİZ ");
            break;

        case 9:
            printf ("DOKUZ ");
            break;
    }

}
    