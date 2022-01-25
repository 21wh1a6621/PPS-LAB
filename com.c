#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,si,ci;
	printf("Enter the value of p,t,r");
	scanf("%f %f %f",&p,&t,&r);
	//Calculating the simple interest
	si=(p*t*r)/100;
	printf("Simple Interest amount is %f\n",si);
	//Calculating the compound interest
	ci=(p*(pow(1+r/100,t)))-p;
	printf("Compound interest amount is %f",ci);
}
