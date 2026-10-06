#include<stdio.h>
void main()
{
  int amount;
float distance;
clrscr();
printf("Enter order amount:");
scanf("%d",&amount);
printf("Enter delivery distance in km:");
scanf("%f",&distance);

if(amount>=2000&&distance<=5)
{
printf("Free delivery");
}
else if(amount >= 1000 && distance <= 10)
{
        printf("Delivery Charge: Rs.50");
}
    else if(amount >= 500 && distance <= 20)
{
       printf("Delivery Charge: Rs.100");
}
    else
{
printf("Delivery Charge: Rs.150");
}
    getch();
}
