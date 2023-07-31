#include<stdio.h>
int main()
{
    int a;
    char ch;
    short b;
    long c;
    long long d;
    float f;
    double lf;
    printf("length of int : %d\n",sizeof(int));
    printf("length of char : %d\n",sizeof(char));
    printf("length of short : %d\n",sizeof(short));
    printf("length of long : %d\n",sizeof(long));
    printf("length of long long : %d\n",sizeof(long long));
    printf("length of float : %d\n",sizeof(float));
    printf("length of double : %d\n",sizeof(double));
    printf("length of &int : %d\n",sizeof(&a));
    printf("length of &char : %d\n",sizeof(&ch));
    printf("length of &short : %d\n",sizeof(&b));
    printf("length of &long : %d\n",sizeof(&c));
    printf("length of &long long : %d\n",sizeof(&d));
    printf("length of &float : %d\n",sizeof(&f));
    printf("length of &double : %d\n",sizeof(&lf));
    return 0;
}