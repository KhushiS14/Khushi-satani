#include<stdio.h>
#include<conio.h>
main()
{
int clesius;
float fahrenheit=(clesius*9/5)+32;

clrscr();
printf("Enter the value of clesius :");
scanf("%d",&clesius);

fahrenheit=(clesius*9/5)+32;
printf("the value of temperature in fahreheit : %f",fahrenheit);

getch();

}