#include<stdio.h>
void main()
{
  float speed;
clrscr();

printf("Enter your internet speed in Mbps:");
scanf("%f",&speed);

if(speed<10)
{
printf("Internet is slow");
}
else if(speed<=50)
{
printf("Internet is Average");
}
else
{
printf("Internet is fast");
}
getch();
}
