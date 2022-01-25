#include<stdio.h>
int main ()
{
int a,b,c,max;
printf("enter 3 numbers");
scanf("%d%d%d",&a,&b,&c);
max=a>b?a:b;
max=max>c?max:c;
printf("max value is %d",max);	
}
