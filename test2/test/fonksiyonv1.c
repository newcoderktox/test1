#include <stdio.h>
float üs_alma (float üs, float taban){
    float sonuc=1;
    int i;
        if(üs<0){
            for (i=0;i<-üs;i++){
            sonuc*=1/taban;}
            
        }else{
            for (i=0;i<üs;i++){
            sonuc*=taban;
            }
        }   
    return sonuc;
}

int main(){
    float üs,taban,sonuc;

    printf ("Lütfen bir taban griniz: \n");
    scanf_s("%f",&taban);

    printf ("Lütfen bir üs giriniz: \n");
    scanf_s ("%f", &üs);
    sonuc=üs_alma(taban,üs);
    printf ("Sonuç eşittir %f.\n",sonuc);
    return 0;
}