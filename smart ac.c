#include<stdio.h>
int main()
{
    int room_temp;
    printf("\t\t ***Welcome to Smart Home***\n\n");
    printf("Enter value for a room: ");
    scanf("%d",&room_temp);

    if(room_temp <= 22)
    {
        printf("Turn OFF AC");
    }
    else if(room_temp >= 26)
    {
        printf("Turn ON AC");
    }
    else
    {
        printf("AC running");
    }
    return 0;
}

