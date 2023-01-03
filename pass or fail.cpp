#include<stdio.h>
#include<conio.h>
int main()
{
	int pass=0,fail=0,i,m;
	for (i=1; i<=20; i++)
	{
	    printf("Marks of student:");
	    scanf("%d",&m);
        if (m>33)
          pass=pass+1;
        else
          fail=fail+1;
	}
    printf("Students passed = %d",pass);
    printf("\nStudents failed = %d",fail);
    getch();
}
