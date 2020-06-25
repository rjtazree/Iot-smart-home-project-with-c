#include<stdio.h>
int main()
{
    int CO,CO2,O3 ;
    printf("Enter value of Ozone gas for eight hour period: ");
    scanf("%d",&O3);
    printf("Enter value for CO2: ");
    scanf("%d",&CO2);
    printf("Enter value for CO level: ");
    scanf("%d",&CO);
    if(O3 < 80)//80 parts per billion(ppb)
    {
        printf("\nOzone gas exist safe level");
    }
    else
    {
        printf("Ozone gas exist in risk level");
    }
    if(CO2 >= 400 && CO2 <= 1000) //CO2 input in ppm
    {
        printf("\nCO2 exists Safe level in air");
    }
    else if(CO2 >= 1000 && CO2<= 2000)
    {
        printf("\nCO2 exists in Poor quality");
    }
    else
    {
        printf("\nCO2 exists in dangerous level causes for different physical problem!");
    }
    if(CO >= 0 && CO < 10)
    {
        printf("\nCO exists in safe level");
    }
    else if(CO >= 10 && CO <=24)
    {
        printf("\nCO existance level risk for health");
    }
    else if(CO > 24)
    {
        printf("\nCO existance level high risk for health");
    }
    return 0;
}
