#include <stdio.h>
int main(){
    float r;
    float pi;
    float cevre;
    float alan;

    pi=3.14;

    printf ("Lütfen bir yarıçap giriniz: \n");
    scanf_s ("%f", &r);

    cevre = pi*r;
    alan= pi*r*r;

    printf ("Çemberinizin çevresi: %f\n", cevre);
    printf ("Dairenizin alanı: %f\n", alan);

    return 0;

}
