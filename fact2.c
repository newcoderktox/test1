#include <stdio.h>
int main(){
    int n;
    long int fact=1;

    printf ("Lütfen bir sayı giriniz: \n");
    scanf_s ("%d", &n);

    while (n!=0){
        fact= fact*n;

        n--;}
    printf ("Giridiğiniz sayının faktöriyeli %ld.\n", fact);
    return 0;
}