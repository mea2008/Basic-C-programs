#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	int sum=0;
	for(n=2; n<=50; n+=2)
	  sum=sum+n;
	printf("Sum of even numbers upto 50 is = %d",sum);
    getch();
}
