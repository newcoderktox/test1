#include <stdio.h>
int main(){
    int first=1,second=1,third=0,i,num;

    printf ("bir sayı girin");
    scanf_s ("%d", &num);

    for (i=1;i<=num;i++){
        first=second;
        second=third;
        third=first+second;
        printf ("%d\n",third);


    }

return 0;
}