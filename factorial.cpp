#include<stdio.h>
#include<conio.h>
int main()
{
	int n,fact,i;
	printf("Enter a number = ");
	scanf("%d",&n);
	fact=1;
	for (i=1; i<=n; i++)
	  fact=fact*i;
	printf("The factorial of %d is %d",n,fact);
    getch();
}
