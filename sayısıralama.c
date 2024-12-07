#include <stdio.h>

int main() {
    int sayi1, sayi2, sayi3;

    printf("Birinci sayıyı girin: ");
    scanf_s("%d", &sayi1);

    printf("İkinci sayıyı girin: ");
    scanf_s("%d", &sayi2);

    printf("Üçüncü sayıyı girin: ");
    scanf_s("%d", &sayi3);

    if (sayi1 == sayi2 || sayi2 == sayi3 || sayi1 == sayi3) {
        printf("Üçü de farklı olmalıdır.\n");
    } else {
        int enBuyuk, enKucuk, ortadaki;

    
        if (sayi1 > sayi2 && sayi1 > sayi3) {
            enBuyuk = sayi1;
        } else if (sayi2 > sayi1 && sayi2 > sayi3) {
            enBuyuk = sayi2;
        } else {
            enBuyuk = sayi3;
        }

     
        if (sayi1 < sayi2 && sayi1 < sayi3) {
            enKucuk = sayi1;
        } else if (sayi2 < sayi1 && sayi2 < sayi3) {
            enKucuk = sayi2;
        } else {
            enKucuk = sayi3;
        }

        
        ortadaki = sayi1 + sayi2 + sayi3 - enBuyuk - enKucuk;

        printf("En büyük sayı: %d\n", enBuyuk);
        printf("Ortadaki sayı: %d\n", ortadaki);
        printf("En küçük sayı: %d\n", enKucuk);
    }

    return 0;
}
