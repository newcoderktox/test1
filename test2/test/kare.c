#include <stdio.h>
int main(){
    int sayı;
    int kare;
    int küp;
    int sonuc;

    printf ("Lütfen bir sayı giriniz: \n");
    scanf_s ("%d", &sayı);

    kare=sayı*sayı;
    küp=sayı*kare;

    printf ("Bu sayının karesi:%d\n",kare);
    printf ("Bu sayının küpü:%d: \n",küp);
    return 0;
}