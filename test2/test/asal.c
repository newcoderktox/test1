#include <stdio.h>
int main(){
    int sayı;
    int i=2;
    
    printf ("Bir sayı giriniz: \n");
    scanf_s ("%d", &sayı);

    if (sayı<0){
        printf ("Geçersiz İşlem.\n");
        return 0;
    }

    while (i<sayı/2){
        if (sayı%i==0){
            printf ("Seçtiğiniz sayı asal değil. %d sayısı %d sayısı ile bölünür.\n", sayı, i);
            return 0;
        }
        i++;
    }
printf ("%d sayısı asal sayıdır.", sayı);
return 0;


}