#include <stdio.h>
int main()
{
     int relative_humidity,wind;
     printf("\n\n\t\t\tWelcome to Smart Window ");

     printf("\n\nEnter value of humidity: ");
     scanf("%d", &relative_humidity);
     printf("Enter wind value: ");
     scanf("%d",&wind);
     if(wind > 50 || (relative_humidity > 90 && relative_humidity <= 100))  //Wind=50km/hr
     {
         printf("\n\nThe window will be closed\n\n");
     }
     else
     {
         printf("\n\nThe window will be opened \n\n");
     }
     return 0;
 }

