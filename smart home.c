#include<stdio.h>

smart_home();
smart_kitchen();
smart_garbage_bin();
air_quality();
smart_ac();
smart_window();
smart_motor();
smart_irrigation();
smart_coffee_maker();
smart_parking();
smart_light_system();
smart_fan_system();

int main()
{
    char stable_screen;

    while(1)
    {
        smart_home();
    printf("\n\nEnter choice : ");
        stable_screen=getche();

        switch(stable_screen)
        {

            case '1': air_quality();
                      break;
            case '2': smart_kitchen();
                      break;
            case '3': smart_garbage_bin();
                      break;
            case '4': smart_ac();
                      break;
            case '5': smart_window();
                      break;
            case '6': smart_fan_system();
                      break;
            case '7': smart_light_system();
                      break;
            case '8': smart_motor();
                      break;
            case '9': smart_irrigation();
                      break;
             case 'c': smart_coffee_maker();
                      break;
            case '*': smart_home();
            case '0': exit(0);
                    break;

        }
    }
}

smart_home(){

    printf("\n\t\t\t\t\tWelcome to SMART HOME!!!! \n\n");
    printf("Press 1. for Air Quality of Home\n");
    printf("Press 2. for Smart Kitchen\n");
    printf("Press 3. for Smart Bin \n");
    printf("Press 4. for Smart AC \n");
    printf("Press 5. for Smart Window \n");
    printf("Press 6. for Smart Fan System \n");
    printf("Press 7. for Smart Light System \n");
    printf("Press 8. for Smart Motor \n");
    printf("Press 9. for Smart Irrigation for Gardening\n");
    printf("Press c. for Smart Coffee Maker\n");
    printf("Press *. return to main menu \n");
    printf("Press 0. Stop the app \n\n");

}


smart_garbage_bin(){

    int distance,weight;

    printf( "\n\nEntering distance between garbage lid and hand (in cm): ");
    scanf("%d",&distance);//signal from sensor

    if(distance>30 && distance <60 )
        printf("\nGarbage bin lid will open\n");

    else
        printf("\nGarbage lid will close\n");



    printf( "Entering weight of garbage(in kg) : ");
    scanf("%d",&weight);//signal from weight sensor

     if(weight>=5 )
        printf("\n\nLCD display will show the bin is full\n");

    else

        printf("\n\nMore garbages can be put\n");

}


smart_kitchen(){

    int methane_density;
    printf("\n\n\t\t ***Welcome to Smart Kitchen***\n\n");
    printf("Enter value of methane gas for kitchen: ");
    scanf("%d",&methane_density);

    if(methane_density <= 200)
    {
        printf("Safe kitchen");
    }
    else if(methane_density > 200 && methane_density <= 400)
    {
        printf("Little Danger!");
    }
    else
    {
        printf("Danger for kitchen!!!");
    }


}

smart_motor(){

    int up, down,Depth=500;
    printf("\n\nEnter value for down stream water level: ");
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

}

air_quality(){
       int CO,CO2,O3 ;
    printf("\n\n\t\tWanna know air quality of your smary home?\n ");
    printf("\n\nEnter value of Ozone gas for eight hour period: ");
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
}

smart_irrigation(){

    int soil_moisture,air_humidity;
    printf("\n\n\t\t\t *** Smart Irrigation System ***\n\n");
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
}

smart_ac(){


    int room_temp;
    printf("\n\n\t\t ***Welcome to Smart AC***\n\n");
    printf("Enter temperature value for a room: ");
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

smart_window(){

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






}

smart_coffee_maker(){


    int selection, cancel,amount;
   printf("\t\tWelcome to Smart coffee Maker\n\n");

    printf("\n\nMain Menu\n\n");
    printf("1.Coffee\n");
    printf("2.Espresso\n");
    printf("3.Turkish Coffee\n");
    printf("4.coffee with milk\n");
    printf("5.Exit\n");
    printf("\n\nSelect your choice:  ");
    scanf("%d",&selection);

    switch(selection)
    {
        case 1: printf("You have selected coffee.");break;
        case 2: printf("You have selected Espresso.");break;
        case 3: printf("You have selected  Turkish coffee.");break;
        case 4: printf("You have selected coffee with milk.");break;
        case 5: break;
        default:printf("Invalid input!!");break;
    }

    if(selection>0 && selection<5){
        printf("\n Press 1 to continue or 2 to turn off coffee maker:  ");
        scanf("%d",&cancel);
        if(cancel==1){
            printf("How much do you need(Max is 10)\n");
            scanf("%d",&amount);
            if(amount<=10)
                printf("\nCoffee is being made\n\n");
            else
                printf("\nIt is beyond capacity\n\n");
        }

    }

}


smart_fan_system(){

        int selection, cancel,amount;

    printf("\n\n\t\tWelcome to Smart Fan System\n\n");
    printf("Main Menu\n");
    printf("1.Bedroom");        printf("\t\t 6 Fans\n");
    printf("2.Drawingroom");    printf("\t\t 2 Fans\n");
    printf("3.Dainigroom");     printf("\t\t 2 Fans\n");
    printf("4.Kitchen");        printf("\t\t 1 Fan\n");
    printf("5.Exit\n");
    printf("\n");
    printf("Select your choice:  ");
    scanf("%d",&selection);

        switch(selection)
    {
        case 1: printf("You have selected Bedroom.");
                break;
        case 2: printf("You have selected Drawingroom.");
                break;
        case 3: printf("You have selected Diningroom.");
                break;
        case 4: printf("You have selected Kitchen.");
                break;
        case 5: printf("Thanks");
                break;
        default:printf("Invalid input!!");
                break;
    }


    if(selection>0 && selection<5){
        printf("\n Press 1 to turn on or 2 turn off the fans:  ");
        scanf("%d",&cancel);
        if(cancel==1){
            printf("\nThe number of fans you wanna turn on: \n");
            scanf("%d",&amount);
             printf("\nFans have been turned on.\n\n");
        }
        else{
            printf("\nFans have been turned off.\n\n");
        }
    }

}


smart_light_system(){


int selection, cancel,amount;

    printf("\n\n\t\tWelcome to Smart Light System\n\n");
    printf("Main Menu\n");
    printf("1.Bedroom");        printf("\t\t 6 lights\n");
    printf("2.Drawingroom");    printf("\t\t 2 lights\n");
    printf("3.Dainigroom");     printf("\t\t 2 lights\n");
    printf("4.Kitchen");        printf("\t\t 1 light\n");
    printf("5.Exit\n");
    printf("\n");
    printf("Select your choice:  ");
    scanf("%d",&selection);

        switch(selection)
    {
        case 1: printf("You have selected Bedroom.");
                break;
        case 2: printf("You have selected Drawingroom.");
                break;
        case 3: printf("You have selected Diningroom.");
                break;
        case 4: printf("You have selected Kitchen.");
                break;
        case 5: printf("Thanks");
                break;
        default:printf("Invalid input!!");
                break;
    }


    if(selection>0 && selection<5){
        printf("\n Press 1 to turn on or 2 turn off the lights:  ");
        scanf("%d",&cancel);
        if(cancel==1){
            printf("\nThe number of lights you wanna turn on : \n");
            scanf("%d",&amount);
             printf("\nLights have been turned on.\n\n");
        }
        else{
            printf("\nLights have been turned off.\n\n");
        }
    }







}
