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

    int methane_density,kitchen_temperature;

    printf("\n\n\t\t ***Welcome to Smart Kitchen***\n\n");
    printf("Enter value of methane gas for kitchen: ");
    scanf("%d",&methane_density);

    printf("\nEnter Temperature for kitchen: ");
    scanf("%d", &kitchen_temperature);

    if(methane_density >= 300 && methane_density <= 400)  // density Unit in ppm
    {
        printf("\nSafe kitchen");
        printf("\nTurn ON Green light");
    }
    else if(methane_density < 300 || methane_density > 10000)
    {
        printf("\nOut of sensor range value");

    }
    else if(methane_density > 400 && methane_density <= 500)
    {
        printf("\nLittle Danger kitchen!");
        printf("\nTurn ON Yellow light");
    }

    else if(methane_density > 500 && methane_density <= 10000)
    {
        printf("\nHigh Risk for health!!!");
        printf("\nTurn ON Red light");
    }
    if(kitchen_temperature >= 25)
    {
        printf("\n\nTurn ON FAN");
    }
    else if(kitchen_temperature <= 20)
    {
        printf("\n\nTurn OFF FAN");
    }
    else if(kitchen_temperature > 20 && kitchen_temperature < 25)
    {
        printf("\n\nDon't ON/OFF Fan");
    }
}

smart_motor(){

    int up=495, down=200,depth,max_level=500;

    printf("\n\nEnter value for depth of water: ");
    scanf("%d", &depth);

    if(depth <= down)
    {
        printf("Turn ON Motor");
    }
    else if(depth >= up && depth <= max_level )
    {
        printf("Turn OFF Motor");
    }
    else if(depth > max_level)
    {
        printf("Unexpected depth! Sensor trouble");
    }
    else if(depth > down && depth < up)
    {
        printf("Don't ON/OFF Motor");
    }

}

air_quality(){

    int CO,CO2,O3 ;
    printf("\n\n\t\tWanna know air quality of your smart home?\n ");
    printf("\n\nEnter value of Ozone gas for eight hour period: ");
    scanf("%d",&O3);
    printf("Enter value for CO2: ");
    scanf("%d",&CO2);
    printf("Enter value for CO level: ");
    scanf("%d",&CO);
    if(O3 < 80)//80 parts per billion(ppb) / 1ppm=1000 ppb
    {
        printf("\nOzone gas exist safe level");
    }
    else
    {
        printf("Ozone gas exist in risk level");
    }
    if(CO2 >= 250 && CO2 <= 1000) //CO2 input in ppm
    {
        printf("\nCO2 exists Safe level in air");
    }
    else if(CO2 > 1000 && CO2<= 2000)
    {
        printf("\nCO2 exists causes Poor air");
    }
    else if(CO2 >= 2000 && CO2 <=5000)
    {
        printf("\n Danger!! \nCO2 existance level may create headaches, sleepiness and stagnant, loss of attention, increased heart rate and slight nausea condition.");
    }
    else if(CO2 > 40,000)
    {
        printf("\nBrain damage, Coma, Even death can be occured");
    }
    else if(CO2 > 0 && CO2 < 400)
    {
        printf("Unexpected value!");
    }

    /*else
    {
        printf("\nCO2 exists in dangerous level causes for different physical problem!");
    } */

    if(CO >= 0 && CO < 10)  //CO in ppm unit
    {
        printf("\nCO safe for health");
    }
    else if(CO >= 10 && CO <800)
    {
        printf("\nCO may cause different diseases");
    }

    else if(CO >= 800)
    {
        printf("\nCO may cause death!");
    }
}

smart_irrigation(){

    int soil_moisture,air_humidity;
    printf("\n\n\t\t\t *** Smart Irrigation System ***\n\n");
    printf("Enter value for soil moisture: ");
    scanf("%d",&soil_moisture);

    printf("\nEnter value for air humidity: ");
    scanf("%d",&air_humidity);

    if((soil_moisture > 70 && soil_moisture <= 100) || air_humidity >= 95)
    {
        printf("\nNo Irrigation needed.");
    }



    else if((soil_moisture >= 0 && soil_moisture <= 70) && air_humidity < 95)
    {
        printf("\nIrrigation Start");
    }
    /*else if(soil_moisture < 60 && air_humidity < 80)
    {
        printf("\nDangerously low soil moisture!! Irrigation Immediately needed!!");
    } */
}

smart_ac(){


    int room_temp;
    printf("\n\n\t\t ***Welcome to Smart AC***\n\n");
    printf("Enter temperature value for a room: ");
    scanf("%d",&room_temp);

    if(room_temp <= 20)
    {
        printf("\nTurn OFF AC");
    }
    else if(room_temp >= 26)
    {
        printf("\nTurn ON AC");
    }
    else
    {
        printf("\nDon't ON/OFF AC");
    }
    return 0;
}

smart_window(){
     printf("\n\n\t\t\t**Welcome to Smart Window** ");

    int input,i,flag=0;
    while(1){
   printf("\n\nPress 1. for opening window\n");
    printf("Press 0. for closing window\n");
     printf("Press 9. for returm to main menu\n");
      printf("Press your key : ");
    scanf("%d",&input);

    if(input==1){
        char ans[10];
        if(flag==0){
        printf("\nwindow will open\n");
        flag=1;
        }
        else{
         printf("\nwindow is already opened\n");
        //printf("wanna close the window? write yes/no\n");

        }
    }

    if(input==0){
       if(flag==1){
        printf("\nwindow will close\n");
        flag=0;
    }
        else
         printf("\nwindow is already closed\n");

    }
        if(input==9)
        break;
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

