#include <stdio.h>
int main(){
    float not,sum=0;
    int i=1;

    do {
        printf ("%d.notu giriniz: \n",i);
        scanf_s ("%f", &not);
        if (not==0){
            break;
        }else{
            sum+=not;
        }
        i++;
    }while (not!=0);
        printf ("%d öğrencinin not oralaması: %f\n", i ,sum/(i-1));
return 0;
}