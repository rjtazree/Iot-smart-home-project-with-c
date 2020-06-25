#include<stdio.h>
int main()
{
    int up, down,Depth=500;
    printf("Enter value for down stream water level: ");
    scanf("%d",&down);
    printf("Enter value for up stream water level: ");
    scanf("%d",&up);
    if(down <= 200)
    {
        printf("Please turn ON Motor switch");
    }
    else if(up >= 490)
    {
        printf("Please turn OFF Motor");
    }
    else
    {
        printf("Tank is filling with water");
    }
    return 0;
}
