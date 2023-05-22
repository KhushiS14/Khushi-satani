#include<stdio.h>
#include<conio.h>
main()
{
int height;
int base;
int area;

clrscr();
printf("enter the height of triangle is:");
scanf("%f",&height);

area=height*base;
printf("enter the base of triangle is:");
scanf("%f",&base);

printf("enter the area of triangle is:%f",area);
getch();
}