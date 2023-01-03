#include <stdio.h>
#include<conio.h>

int main()
{
	int prod,n;//prod=product//
	int i=1;
	printf("Enter number:\n");
	scanf("%d",&n);
	for (i=1; i<=10; i++)
	{
		    prod=n*i;
	  	printf("%d x %d = %d\n",n,i,prod);
    }
    getch();
}
