#include<stdio.h>
#include<conio.h>
int main()
{
	int n,prod;
	int i=1;
	printf("Enter a number = ");
	scanf("%d",&n);
	while (i<=10)
	{
	 prod = i*n;
	 printf("%d x %d = %d\n",n,i,prod);
	 i++;
    }
    getch();
}
