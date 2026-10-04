#include<stdio.h>
void main()
{
  int age;
clrscr();
printf("Enter age:");
scanf("%d",&age);

if(age<5)
{
printf("Free ticket");
}
else if(age<=10)
{
printf("Ticket fare=Rs 10");
}
else if(age<=40)
{
printf("Ticket fare=Rs 40");
}
else if(age<=60)
{
printf("Ticket fare=Rs 60");
}
else
{
printf("Ticket fare=Rs 25");
}
getch();
}
