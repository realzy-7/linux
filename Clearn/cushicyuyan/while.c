#include<stdio.h>
int main()
{
    int line = 99999;
    while(line < 100000)
    {
        printf("abcdefg\n");
        line++;
    }
    if(line > 10000)
        printf("gg\n");
    return 0;
}
