#include <stdio.h>
#include <stdlib.h>

int main()
{
    int selection, cancel,amount;
   printf("\t\tWelcome to Smart coffee Maker\n\n");

   printf("Press any key\n\n");
    getchar();
    printf("\n\nMain Menu\n\n");
    printf("1.Coffee\n");
    printf("2.Espresso\n");
    printf("3.Turkish Coffee\n");
    printf("4.coffee with milk\n");
    printf("5.Exit\n");
    printf("############\n");
    printf("Select your choice:  ");
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
        printf("\n Press 1 to continue or 2 to cancel your order:  ");
        scanf("%d",&cancel);
        if(cancel==1){
            printf("How much do you need(Max is 10)\n");
            scanf("%d",&amount);
        }
    }

    return 0;
}
