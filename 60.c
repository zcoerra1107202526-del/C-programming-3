#include<stdio.h>
void main()
{
  int battery;
float temp;
  clrscr();

printf("Enter battery percentage:");
scanf("%d",&battery);
printf("Enter phone temp:");
scanf("%f",&temp);

if(battery>=80&&temp>35)
{
  printf("Battery status: Excellent");
}
else if(battery>=40&&temp>40)
{
printf("Battery status: Normal");
}
else if(battery>=15)
{
printf("Battery status Low - Charge soon");
}
else
{
printf("Battery status: Critical - Charge Immediately");
}
getch();
}
