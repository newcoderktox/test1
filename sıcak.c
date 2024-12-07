#include <stdio.h>
   int main(){
    float c;
    float f;

    printf ("LÜtfen Fahreinheit cinsinden sıcaklığı giriniz: \n");
    scanf_s ("%f", &f);

    c=(f-32)*5/9;
    printf ("Celcius cinsinden sıcaklıklık:%f!\n", c);
    return 0;
}