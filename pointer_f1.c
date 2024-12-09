#include <stdio.h>
double karesinial(double* ptr);
int main(){
    double number, result;
    printf ("sayı gitin: \n");
    scanf_s ("%lf", &number);

    result=karesinial(&number);
    printf ("%lf nin karesi %lf", number, result);
}

double karesinial (double* ptr){
    return *ptr * *ptr;
}