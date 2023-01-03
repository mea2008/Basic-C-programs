#include<stdio.h>
#include<conio.h>
int main()
{
	int m;
	printf("Enter marks : ");
    scanf("%d",&m);
    if (m>=80)
      printf("Grade is A+");
    else if ((m>=70)&&(m<80))
      printf("Grade is A");
    else if ((m>=60)&&(m<70))
      printf("Grade is B");
     else if ((m>=50)&&(m<60))
      printf("Grade is C");
     else if ((m>=40)&&(m<50))
      printf("Grade is D");
	 else if ((m>=33)&&(m<40))
      printf("Grade is E");
	else 
	  printf("Ungraded");
	getch();  
}
