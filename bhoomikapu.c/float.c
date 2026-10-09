#include<stdio.h>
int main (){ 
    int a[] = {10, 20, 30, 40, 50};
    a[2] = 70;
    printf("output");
    int i;
    for( i =0; i < 4; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0 ;

}