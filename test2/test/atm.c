#include <stdio.h>
int main(){
    int islem;
    int bakiye=10000;
    int tutar;

    printf ("1.Bakiye sorgulama.\n 2.Para çekme.\n 3.Para yatırma.\n");
    printf ("1-3 arasında bir işlem seçiniz.\n");
    scanf_s ("%d", &islem);

    switch (islem){
        case 1:
        printf ("Bakiyeniz %d.\n", bakiye);
        break;

        case 2:
        printf ("Çekmek istediğiniz para miktarını girin: \n");
        scanf_s ("%d", &tutar);
        if (tutar>bakiye){
            printf ("Yetersiz bakiye.\n");
        }else{
        bakiye-=tutar;
        printf("Bakiyeniz: %d", bakiye);
        }
        break;

        case 3:
        printf ("Yatırmak istediğiniz  para miktarını giriniz: \n");
        scanf_s ("%d", &tutar);
        bakiye+=tutar;
        printf ("Bakiyeniz: %d\n", bakiye);
        break;

        default:
        printf ("Bilinmeyen işlem.\n");
        }
}