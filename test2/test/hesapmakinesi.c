#include <stdio.h>
int main(){
    float sayı1, sayı2;
    char islem;

    printf("Lütfen birinci sayıyı giriniz: \n");
    scanf_s ("%f",&sayı1);

    printf("Lütfen ikinci sayıyı giriniz: \n");
    scanf_s ("%f",&sayı2);

    printf ("LÜtfen yapmak istediğiniz işlemi seçin: +, -, *, /\n");
    scanf_s (" %c", &islem);

    if (islem == '+'){
        printf ("İşleminizin sonucu %f.\n", sayı1+sayı2);
    } else if(islem == '-'){
        printf ("İşleminizin sonucu %f.\n", sayı1-sayı2);
    } else if(islem == '*'){
        printf ("İşleminizin sonucu %f.\n", sayı1*sayı2);
    } else if (islem == '/'){
        if (sayı2!=0){
            printf ("İşleminizin sonucu %f.\n", sayı1/sayı2);
        }else{
            printf ("ERROR 404.\n");
        }
    }else{
        printf ("Lütfen geçerli bir işlem seçiniz.\n");

    }
    
    return 0;
}

    
