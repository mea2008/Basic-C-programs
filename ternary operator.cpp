#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
    c=(a>b)?a:b;
    printf("Larger number is:%d",c);
    getch();
}
