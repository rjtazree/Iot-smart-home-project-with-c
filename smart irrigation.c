#include<stdio.h>
int main()
{
    int soil_moisture,air_humidity;
    printf("\t\t\t *** Smart Irrigation System ***\n\n");
    printf("Enter value for soil moisture: ");
    scanf("%d",&soil_moisture);

    printf("\nEnter value for air humidity: ");
    scanf("%d",&air_humidity);

    if(soil_moisture >= 80 && soil_moisture <= 100)
    {
        printf("\nNo Irrigation needed");
    }

    else if(soil_moisture < 80 && soil_moisture >= 60 && air_humidity < 80)
    {
        printf("\nIrrigation to be applied");
    }
    else if(soil_moisture < 60 && air_humidity < 80)
    {
        printf("\nDangerously low soil moisture!! Irrigation Immediately needed!!");
    }
    return 0;
}
