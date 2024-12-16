#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

void toplam (int *p){
    *p= (*p) + 10;
    
}
int main(){
    int a=4;
    int *p=&a;
    int **q;
    q=&p;
    

    printf ("i= %d \n", a);
    printf ("%d\n", *p);
    printf ("%p\n", &a);
    printf ("%p\n", p);
    printf ("%p\n",&p);
    printf ("%p\n", p+1);
    printf ("%d\n",(*p)+1);
    printf ("%p\n", q);
    printf ("%p\n", *q);

    int x=29;

    toplam(&x);
    printf ("sonuc %d\n", x);

    int array[]={14,24,64,234,876};
    int *ptr;
    ptr=array;

    printf ("%p\n", array);
    printf ("%d\n", array[0]);
    int i;

    for (i=0;i<5;i++){
        printf ("%p\t", array+i);
        printf ("%p\t", &array[i]);
        printf ("\n\n");
        printf ("%d\t", array[i]);
        printf ("%d\n",*(array+i));


    }

    char c[5];
    
    c[0]='n';
    c[1]='i';
    c[2]='s';
    c[3]='a';

    printf ("%s\n",c);

    int n;
    printf ("boyut girin: \n");
    scanf ("%d",&n);
    int *b= (int*)calloc (n,sizeof(int));
    
    for (int i=0;i<n;i++){
        b[i]=(5*i);

    }

    for (int i=0; i<n; i++){
        printf ("%d.eleman değeri: %d\n", i+1,b[i]);
    }
    free(b);

    char name[50];

    printf ("isminizi girin: \n");
    getchar();
    fgets (name,50,stdin);

    puts(name);
    printf ("%s\n", name);

    int size;

    printf ("size gir; \n");
    scanf ("%d", &size);

    int *ptrA= (int*)malloc(size*sizeof(int));
    for (int i=0;i<size;i++){
        ptrA[i]=2*i;

    }
     
    
    for (int i=0; i<size;i++){
        printf ("[%d]=%d \n", i,ptrA[i]);

    }

    free(ptrA);







    return 0;
}