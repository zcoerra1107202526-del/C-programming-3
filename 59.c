#include<stdio.h>
void main()
{
    int hours;
    float fee;

    clrscr();

    printf("Enter parking hours: ");
    scanf("%d",&hours);

    if(hours <= 2)
    {
        fee = 30;
        printf("Parking Fee = Rs.%.2f",fee);
    }
    else if(hours <= 5)
    {
        fee = 30 + (hours - 2) * 20;
        printf("Parking Fee = Rs.%.2f",fee);
    }
    else if(hours <= 10)
    {
        fee = 90 + (hours - 5) * 15;
        printf("Parking Fee = Rs.%.2f",fee);
    }
    else
    {
        fee = 165 + (hours - 10) * 10;
        printf("Parking Fee = Rs.%.2f",fee);
    }

    getch();
}
