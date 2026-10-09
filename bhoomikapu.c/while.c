#include<stdio.h>
int main()
{
    int i = 0;
    int j = 0;
while (i < 5)
{
    printf("i = %d", i);

    j = 0;

    while (j < 5)
    {
        printf("j = %d", j);
        j = j + 1;
    }

    i = i + 1;
}
}