#include <stdio.h>
int main(){
    int yas;
    int ehliyet;

    printf ("Lütfen yaşınızı giriniz: \n");
    scanf_s("%d", &yas);

    if(yas>=18){
        printf ("Ehliyetiniz var mı? Var ise 1 yazınız. Yoksa 0 yazınız.");
        scanf_s ("%d", &ehliyet); 
            if (ehliyet==1){
                printf ("Araba sürebilirsiniz.");
            } else {
                printf ("Araba süremezsiniz.");
            }
    } else {
        printf ("Araba süremezsiniz.");
    }


        return 0;
}
     