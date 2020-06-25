#include<stdio.h>
int main()
{
    int methane_density;
    printf("\t\t ***Welcome to Smart Kitchen***\n\n");
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
    return 0;
}

