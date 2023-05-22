#include<stdio.h>
#include<conio.h>
main()
{
int principal;
int rate;
int time;
int area;

clrscr();
printf("enter the principal of simple interest :");
scanf("%d",&principal);

area=principal*rate*time;
printf("enter the rate of simple interest :");
scanf("%d",&rate);

printf("enter the time of simple interest :");
scanf("%d",&time);

printf("enter the area of simple interest is : %d",area);
getch();

}