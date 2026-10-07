#include<stdio.h>
void main()
{
  int vehicle;
char signal;
  clrscr();
printf("Enter signal colour(R/G/Y)");
scanf("%c",&signal);

printf("Enter number of vehicle:");
scanf("%d",&vehicle);

if(signal == 'R' && vehicle > 50)
{      
  printf("Heavy traffic - Wait for signal");
}  

    else if(signal == 'G' && vehicle <= 50)
    { 
      printf("Traffic can move");
      }
    else if(signal == 'Y')
    {
      printf("Slow down and prepare to stop");
      }
    else
    {
printf("Follow traffic rules");
}
    getch();
}
