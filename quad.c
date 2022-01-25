#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	char x,QE,roots;
	printf("Enter the values of a,b,c");
	scanf("%d%d%d,&a,&b&c");
	QE=a*x*x+b*x+c;
	d=b*b-4*a*c;
	if(d>0)
	{
		printf("roots are real and distinct");
	}
	else if(d==0)
	{
		printf("roots are real and equal");
	}
	else
	{
		printf("roots are imaginary");
	}
	roots=(-b+sqrt(d))/2*a,a,(-b-sqrt(d))/2
	*a;
	printf("\nroots are %d,%d,roots");
}
