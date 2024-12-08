#include <stdio.h>
int main(){
    int num1;
    int num2;
    int num3;
    float sonuc;

    printf ("Birinci notunuzu giriniz: \n");
    scanf_s ("%d", &num1);

    printf ("İkinci notunuzu giriniz: \n");
    scanf_s ("%d", &num2);

    printf ("Üçüncü notunuzu giriniz: \n");
    scanf_s ("%d", &num3);

    sonuc= (num1+num2+num3)/3.0;

    printf ("Ortalamanız:%.2f\n", sonuc);
    return 0;

}