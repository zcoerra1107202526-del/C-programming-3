#include<stdio.h>
void main()
{
  int age;
float salary,credit;
clrscr();
printf("Enter your age:");
scanf("%d",&age);
printf("Enter salary:");
scanf("%f",&salary);
printf("Enter credit:");
scanf("%f",&credit);

if(age>=21 && salary>=50000&&credit>=750)
{
printf("Loan approved - Premium quality");
}
else if (age>=21 && salary >=30000&&credit>=650)
  {
printf("Loan approved standard Category");
}
    else if(age >= 21 && salary >= 20000 && credit >= 600)
        printf("Loan Requires Further Verification");
    else
{
printf("Loan not approved");
}
getch();
}
