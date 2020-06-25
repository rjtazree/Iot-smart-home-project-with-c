#include <stdio.h>
#include <stdlib.h>

int main()
{
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
        }
        else{
            printf("\nFans have been turned off.\n\n");
        }
    }

    return 0;
}
