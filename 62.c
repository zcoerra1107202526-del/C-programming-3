#include<stdio.h>
void main()
{
    int floor;
    char card;
    clrscr();

    printf("Enter floor number: ");
    scanf("%d",&floor);

    printf("Enter access card type (A/B/C): ");
    scanf(" %c",&card);

    if(floor <= 3 && card == 'A')
        printf("Access Granted - General Floor");
    else if(floor <= 7 && (card == 'A' || card == 'B'))
        printf("Access Granted - Staff Floor");
    else if(floor > 7 && card == 'C')
        printf("Access Granted - Restricted Floor");
    else
        printf("Access Denied");
   getch();
}
