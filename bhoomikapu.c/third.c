#include<stdio.h>
int main(){
    int x=20, y=30, z=10, w=12;
    int largest=x , smallest=x;
    if (y>= largest )
        largest=y;
    if (z>= largest )
        largest=z;
    if (w>= largest )
        largest=w;
    if (y<= smallest )
        smallest=y;
    if (z<= smallest )
        smallest=z;
    if (w<= smallest )
        smallest=w;
    printf("the largest number is %d\n",largest);
    printf("the smallest number is %d\n",smallest);
    return 0;
}