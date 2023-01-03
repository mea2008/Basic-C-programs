#include<stdio.h>
#include<conio.h>
int main()
{
	int m,sum=0,avg,i;
	for(i=1; i<=15; i++)
	{
	    printf("\nEnter marks of student:");
	   scanf("%d",&m);
	   sum=sum + m;
    }
	avg=sum/15;
    printf("\nAverage marks are = %d",avg);
    getch();
}
