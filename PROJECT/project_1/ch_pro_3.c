#include<stdio.h>
#include<conio.h>
main()
{
int first_angle;
int second_angle;
int third_angle;

clrscr();

printf("Enter thevalue of first_angle:");
scanf("%d",&first_angle);

printf("Enter the value of second_angle:");
scanf("%d",&second_angle);

third_angle=180-(first_angle+second_angle);

printf("Enter the value of third_angle:");
printf("the value of third_angle is :%d",third_angle);

getch();



}