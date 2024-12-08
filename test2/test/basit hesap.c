#include <stdio.h>
int main(){
    int num1;
    int num2;
    int sonuc;

    printf ("İlk sayıyı giriniz: \n");
    scanf_s ("%d", &num1);

    printf ("İkinci sayıyı giriniz: \n");
    scanf_s ("%d", &num2);

    sonuc= num1*num2;
    printf ("Sonuç eşittir:%d\n", sonuc);
return 0;

}