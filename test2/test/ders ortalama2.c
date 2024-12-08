#include <stdio.h>

int main (){
    int vize;
    int final;
    int sayı;
    int num;
    float ort;

    printf ("Kaç öğrenci için işlem yapmak istiyorsunuz?: \n");
    scanf_s ("%d", &sayı);
    
    for (int i=0; i<sayı; i++) {
        printf ("%d.Öğrencinin numarasını giriniz: \n", i+1);
        scanf_s ("%d", &num);

        printf ("Vize notunu giriniz: \n");
        scanf_s ("%d", &vize);
        
        printf ("Final notunu giriniz: \n");
        scanf_s ("%d", &final);
        
        ort = (vize*0.4 +final*0.6);
        printf ("%d numaralı öğrencinin ortalaması %.2f \n", num, ort);
    }


    return 0;
}