#include<stdio.h>

int main()
{
    int i = 0;
    int count = 0;
    for ( i = 1; i <= 100; i++)
    {
        if ((i % 10 == 9) || (i / 10 == 9))
        {
            printf("%d  ",i);
            count++;
        }
    }
    printf("count = %d\n",count);
    return 0;
}