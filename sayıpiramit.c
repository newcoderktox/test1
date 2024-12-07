#include <stdio.h>
int main(){
    int i,j,num;
    printf ("Sayı giriniz: \n");
    scanf_s ("%d", &num);

    for (i=1;i<=num;i++){
        for (j=1;j<=i;j++){
        printf ("%d",i);
    }
    printf (" ");
    }
return 0;
}