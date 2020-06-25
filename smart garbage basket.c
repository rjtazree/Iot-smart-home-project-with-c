#include<stdio.h>

main(){
    int distance,weight;

    printf( " Entering distance between garbage lid and hand (in cm): ");
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



return 0;

}
