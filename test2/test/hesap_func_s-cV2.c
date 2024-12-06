#include <stdio.h>
float min(float x, float y){
    if(x<y){
        return x;
    }else{
        return y;
    }
}
float max (float x,float y){
    if(x<y){
        return y;
    }else{
        return x;
    }
}
float toplam (float x, float y){
    return x+y;
}
float cıkart (float x, float y){
    return x-y;
}
float carpma (float x, float y){
    return x*y;
}
float bölme (float x, float y){
    if(y==0){
        printf ("Bir sayı 0'a bölünemez.\n"); 
        return 0;
    }else{
        return x/y;
    }
}
float üs_alma (float x, float y){
    float result=1.0;
    int i;
    if((int)y<0){
        for(i=0;i<-(int)y;i++){
            result*=1.0/x;
        }
    }else{
        for (i=0;i<(int)y;i++){
            result*=x;
        }
    }
    return result;
}
int main(){
    int sec;
    float x,y;

    
    do {
        printf ("\tMENÜ\n1.Minimum Bulma\n2.Maksimum Bulma\n3.Toplama\n4.Çıkartma\n5.Çarpma\n6.Bölme\n7.Üs alma\n0.Çıkış\n");
        scanf_s ("%d", &sec);

        switch (sec){
            case 1:
                printf ("İki adet sayı giriniz.\n");
                scanf_s ("%f %f",&x,&y);
                printf ("İşleminiz sonucu %.2f\n", min(x,y));
                break;

            case 2:
                printf ("İki adet sayı giriniz.\n");
                scanf_s ("%f %f",&x,&y);
                printf ("İşleminiz sonucu %.2f\n", max(x,y));
                break;

            case 3:
                printf ("İki adet sayı giriniz.\n");
                scanf_s ("%f %f",&x,&y);
                printf ("İşleminiz sonucu %.2f\n", toplam(x,y));
                break;

            case 4:
                printf ("İki adet sayı giriniz.\n");
                scanf_s ("%f %f",&x,&y);
                printf ("İşleminiz sonucu %.2f\n", cıkart(x,y));
                break;

            case 5:
                printf ("İki adet sayı giriniz.\n");
                scanf_s ("%f %f",&x,&y);
                printf ("İşleminiz sonucu %.2f\n", carpma(x,y));
                break;

            case 6:
                printf ("İki adet sayı giriniz.\n");
                scanf_s ("%f %f",&x,&y);
                printf ("İşleminiz sonucu %.2f\n", bölme(x,y));
                break;

            case 7:
                printf ("İki adet sayı giriniz.\n");
                scanf_s ("%f %f",&x,&y);
                printf ("İşleminiz sonucu %.2f\n", üs_alma(x,y));
                break;

            case 0:
                printf ("Programdan çıkılıyor...\n");
                break;

            default:
                printf ("Geçersiz İşlem.\n");
                break;
        }
    }while(sec!=0);
    return 0;
}