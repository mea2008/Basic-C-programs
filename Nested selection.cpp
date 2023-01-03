#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	if (n>0)
	{
	   printf("\nIt is a positive number.");
	   if (n%2==0)
	    printf("\n\aThe number is even.");
       else 
        printf("\nThe number is odd");
    }
	else 
       printf("\nYou entered a negative number or zero. ");
    getch();
}
