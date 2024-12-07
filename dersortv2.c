#include <stdio.h>
int main(){
    int ders1, ders2, ders3, ders4;
    float ort;

    printf ("Lütfen birinci notu giriniz: \n");
    scanf_s ("%d", &ders1);

    printf ("Lütfen ikinci notu giriniz: \n");
    scanf_s ("%d", &ders2);

    printf ("Lütfen üçüncü notu giriniz: \n");
    scanf_s ("%d", &ders3);

    printf ("Lütfen dördüncü notu giriniz: \n");
    scanf_s ("%d", &ders4);

    ort=(ders1+ders2+ders3+ders4)/4;
    if (ort>70 && ((ders1>=70)+ (ders2>=70)+ (ders3>=70)+ (ders4>=70))){
        printf ("Tebrikler dersi geçtiniz.");
    }else{
        printf ("Dersten geçemediniz.");
    }
    return 0;
}
