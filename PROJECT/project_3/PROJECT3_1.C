#include<stdio.h>
#include<conio.h>
main()
{
	char c='a';
	char z;
	clrscr();

	do
	{
	     printf("%c\n",c);
	     c=c+4;
	}
	while(c<='z');

       getch();
}