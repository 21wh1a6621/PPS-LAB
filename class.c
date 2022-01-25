#include<stdio.h>
int main()
{
	int phy,chem,maths,avg,total;
	printf("enter 3 subject marks");
	scanf("%d%d%d,&phy,&chem,&maths");
	total=(phy+chem+maths);
	avg=total/3;
	if(avg>=70)
	{
		printf("distinction");
	}
	else if(avg<=70&&avg>=60)
	{
		printf("grade A");
	}
	else if(avg<=60&&avg>=40)
	{
		printf("grade B");
	}
	else if(avg<=40)
	{
		printf("grade C");
	}
}

