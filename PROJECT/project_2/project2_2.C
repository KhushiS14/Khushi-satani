#include<stdio.h>
#include<conio.h>
main()
{
	float amount, value, units;
	clrscr();

	printf("Enter units number :");
	scanf("%f",&units);

	if(units<=50)
	{
		amount=units*0.50;
	}
	else if(units<=150)
	{
		amount=units*0.75;
	}
	else if (units<=250)
	{
		amount=units*1.20;
	}
	else
	{
		amount=units*1.50;
	}
	value=(amount*20)/100;

	printf("the electricity bill is : %f", amount+value);
     getch();
}