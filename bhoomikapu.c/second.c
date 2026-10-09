#include<stdio.h>
int main(){
    float a = 12345.77;
    int b,c;
    b=(int) a;
    c=b%10;
    printf("the right must be %d",c);
    return 0;
}