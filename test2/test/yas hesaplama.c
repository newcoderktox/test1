#include <stdio.h>
int main(){
    int yas;
    int mevcutyıl;
    int dogumyıl;
    mevcutyıl=2024;

    printf ("Lütfen doğum yılınızı giriniz: \n, ");
    scanf_s ("%d", &dogumyıl);

    yas=mevcutyıl-dogumyıl;

    printf ("Yaşınız:%d!\n", yas);
    return 0;


}