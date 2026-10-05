#include<stdio.h>
#include<string.h>
void main()
{
  char food[20];
clrscr();
printf("Enter food item:");
scanf("%s",&food);

if(strcmp(food,"Pizza")==0)
{
printf("Pizza selected - Rs 300");
}
else if(strcmp(food,"Burger")==0)
{
printf("Burger selected - Rs 200");
}
else if(strcmp(food,"Sandwitch")==0)
{
printf("Sandwitch selected - Rs 100");
}
else
{
printf("Item not avaliable");
}
getch();
}
