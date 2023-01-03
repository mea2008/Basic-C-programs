#include<stdio.h>
#include<conio.h>
int main()
{
	int t;
	printf("Enter temperature in celsius : ");
	scanf("%d",&t);
	if (t>35)
	  printf("It is hot!");
	else if ((t>=20)&&(t<=35))
	  printf("Nice day!");
    else 
      printf("It is cold!");
    getch();
}
