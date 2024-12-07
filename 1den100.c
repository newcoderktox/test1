#include <stdio.h>

int main() {
    int toplam = 0;
    int i=1;
    int sayı;

    printf ("Lütfen bir sayı giriniz: ");
    scanf_s ("%d", &sayı);

    for (i = 1; i <= sayı; i++) {
        printf ("%d ", i); 
        toplam += i;
        
    }

    printf("\n1'den %d sayıya kadar olan sayilarin toplami: %d\n",sayı, toplam);

    return 0;
}