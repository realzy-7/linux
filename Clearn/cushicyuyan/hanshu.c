#include<stdio.h>

int Add(int x , int y )
{
    int z = x + y;
    return z;
}

int main( )
{
    int a = 10;
    int b = 20;
    int sum = 0;
    int num1 = 100;
    int num2 = 200;
    sum = Add(a , b);
    printf("sum = %d\n" , sum);
    sum = Add(num1 , num2);
    printf("sum = %d\n" , sum);

    return 0;
}
