#include <stdio.h>
int main(){
    int i,j,desen,sayı;

    printf ("Karakter girin: \n");
    scanf_s ("%c ", &desen);

    printf ("Sayı girin: ");
    scanf_s ("%d", &sayı);
    
    for (i=1;i<=sayı;i++){
        for (j=1;j<=i;j++);

        printf ("%c", desen);
    printf ("\n");
    }
return 0;
}