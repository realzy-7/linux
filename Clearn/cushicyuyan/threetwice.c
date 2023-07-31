#include<stdio.h>

int main()
{
    int i = 0;
    int count = 0;//计数
    for (i = 1; i <= 100; i++)
    {
        if ((i % 3) == 0)
            printf("%d  ",i);
        
        count++;
    }
    printf("1-100之间3的倍数的个数%d\n",count);
    
    return 0;
}