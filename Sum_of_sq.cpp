#include<stdio.h>
#include<conio.h>
int main()
{
  int sum=0;
  int n;
  for(n=1; n<=10; n++)
     sum = sum + (n*n);
  printf("The sum of squares of numbers upto 10 is = %d",sum);
  getch();
  
}
