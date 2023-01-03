#include <stdio.h>
#include <conio.h>
int main()
{
	float x,y,z;
	printf("First number:");
	scanf("%f",&x);
	printf("\nSecond number:");
	scanf("%f",&y);
	printf("\nThird number:");
	scanf("%f",&z);
	printf("\nSum of these numbers=%0.1f",x+y+z);
	printf("\nProduct of these numbers=%0.1f",x*y*z);
	printf("\nAverage of these numbers=%0.1f",(x+y+z)/3);
	getch();
}
