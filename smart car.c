#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

void car_lock();
void car_unlock();
void ac_on();
void touched_or_not();
void cannot_open();
void smart_parking();

int main()
{
    char stable_screen;

    while(1)
    {
    smart_car();

    printf("Enter choice : ");
        stable_screen=getche();

        switch(stable_screen)
        {
            case '1': car_lock();
                      break;

            case '2': car_unlock();
                      break;

            case '3': ac_on();
                      break;

            case '4': touched_or_not();
                      break;

            case '5': cannot_open();
                      break;

            case '6': smart_parking();
                      break;

            case '7': continue;


            case '8': exit(0);
                    break;


        }
    }
}

void smart_car()
{
    printf("\n\t\t\tControl your car even remotely!!!! \n\n");
    printf("Press 1. for locking your car from your device remotely\n\n");
    printf("Press 2. for unlocking your car from your device remotely\n\n");
    printf("Press 3. for turning on ac before you go to car \n\n");
    printf("Press 4. input from car sensor if anyone/anything touched your car or not \n\n");
    printf("Press 5. for turning on alarm if anyone touched it to keep it away\n\n");
    printf("Press 6. smart parking \n\n");
    printf("Press 7. return to main menu \n\n");
    printf("Press 8. Stop the app \n\n");
}

void car_lock(){

}
void car_unlock(){

}
void ac_on(){

}
void touched_or_not(){

}
void cannot_open(){

}
void smart_parking(){


}
