#include<stdio.h>


window_open();

window_close();
int flag;

char ans[10];
main(){
    int input,i;
    while(1){
    printf("\nEnter 1 for opening window and 0 for closing window: ");
    scanf("%d",&input);

    if(input==1){
        char ans[10];
    if(flag==0){
        printf("window will open\n");
        flag=1;
    }
    else{
         printf("window is already opened\n");
        //printf("wanna close the window? write yes/no\n");

    }
    }

    if(input==0){
       if(flag==1){
        printf("window will close\n");
        flag=0;
    }
    else
         printf("window is already closed\n");

    }
    if(input==9)
        break;
    }



    return 0;

}



window_open(){

}

window_close(){
    if(flag==1){
        printf("window will close\n");
        flag=0;
    }
    else
         printf("window is already closed\n");



}
