#include <stdio.h>
int main (){
    int sayı;
    int fact (int);

    printf ("Bir sayı giriniz: ");
    scanf_s ("%d", &sayı);

    printf ("%d!=%d",sayı, fact(sayı));

return 0;
}

int fact (int sayı){
    if (sayı==0){
        return 1;
    }else{
        return sayı*fact(sayı-1);
    }
}