#include<stdio.h>

long DecimaltoBinary();

int main()
{
    long binary;
    int dividend;

    printf(" Enter decimal number : ");
    scanf("%d",&dividend);
    binary = DecimaltoBinary(dividend);
    printf("\n The Binary value is : %ld\n\n",binary);

    return 0;
}
long DecimaltoBinary(int d)
{
    long b=0,remainder,f=1;
    while(d != 0)
    {
         remainder = d % 2;
         b = b + remainder * f;
         f = f * 10;
         d = d / 2;
    }
    return b;
}
