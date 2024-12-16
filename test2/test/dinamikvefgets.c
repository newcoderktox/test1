#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    char name [50];
    printf ("isminizi girin: ");
    fgets (name, 50, stdin);

    printf ("%s", name);
    puts (name);

    char a[3];
    printf ("isim gir");
    fgets (a,3,stdin);
    printf ("%s",a);

return 0;
}