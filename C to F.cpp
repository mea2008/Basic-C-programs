#include <stdio.h>
#include <conio.h>
int main ()
{
	int c;
	printf("Temperature in Celsius:");
	scanf("%d",&c);
	float f=(c*1.8)+32;
	printf("\nTemperature in Farenheit=%0.1f",f);
	getch();
}
