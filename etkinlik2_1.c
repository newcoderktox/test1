#include <stdio.h>
void  array_al(int row1, int colm1, int array1[row1][colm1]);
void array_oku(int row1, int colm1, int array1[row1][colm1]);
int sıralama(int array1[], int size1);
int arraytoplam( int array1[], int size1);
int arraylarislem(int array1[], int array2[], int size1, int size2);

int main(){

int row=0, colm=0;
    printf ("Matris satır sayısını girin: \n");
    scanf_s ("%d", &row);
    if (row<=0){
        printf ("pozitif sayı giriniz: \n");
        return 1;
    }

    printf ("Matris sütun sayısını girin: \n");
    scanf_s ("%d", &colm);
    if (colm<=0){
        printf ("pozitif sayı giriniz: \n");
        return 1;
    }

    int array1[row][colm];
    array_al(row,colm,array1);
    printf ("\n");
    array_oku(row,colm,array1);

return 0;
}

void array_al(int row1, int colm1, int array1[row1][colm1]){
    printf ("Matrisin elemanlarını girin: \n");
    for (int i=0;i<row1;i++){
        for (int j=0; j<colm1;j++){
            printf ("[%d][%d]: ",i+1,j+1);
            scanf_s ("%d", &array1[i][j]);

        }
        
    }

}

void array_oku(int row1, int colm1, int array1[row1][colm1]){
    for (int i=0; i<row1; i++){
        for (int j=0; j<colm1; j++){
            printf ("%d ", array1[i][j]);
        
        }
    printf ("\n");
    }
}
