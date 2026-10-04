#include<stdio.h>
#include<string.h>

void main()
{
    char vehicle[20];

    clrscr();

    printf("Enter vehicle type: ");
    scanf("%s", vehicle);

    if(strcmp(vehicle,"Car")==0)
    {
        printf("Car Selected");
    }
    else if(strcmp(vehicle,"Bike")==0)
    {
        printf("Bike Selected");
    }
    else if(strcmp(vehicle,"Bus")==0)
    {
        printf("Bus Selected");
    }
    else
    {
        printf("Vehicle not available");
    }

    getch();
}
