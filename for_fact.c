#include <stdio.h>
int main(){
    int i,sayı,fact;
    fact=1;

    printf ("Sayı girin: \n");
    scanf_s ("%d", &sayı);

    for (i=1;i<=sayı;i++){
        fact*=i;
    }
    printf ("%d!=%d",sayı,fact);
return 0;
}