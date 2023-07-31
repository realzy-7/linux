#include<stdio.h>
int main()
{
    int a = 2;
    int b = 5;
    int c = b % a;
    printf("a+b=%d\n",a + b);
    printf("b-a=%d\n",b - a );
    printf("a*b=%d\n",a * b);
    printf("b/a=%d\n",b / a);
    printf("a+b=%d\n",c);

    return 0;
}