/*
 * Task3.c
 *
 *  Created on: 11 Sep 2025
 *      Author: Esraa Salah
 */

#include<stdio.h>
struct complexNums
{
	float real;
	float imag;
};
void add(struct complexNums num1,struct complexNums num2)
{
	float sum_real=0.0;
	float sum_imag=0.0;
	sum_real=num1.real+num2.real;
	sum_imag=num1.imag+num2.imag;
	printf("sum=%.2f + %.2f i",sum_real,sum_imag);
}
int main()
{
	struct complexNums n1,n2;
	printf("For 1st complex number\n");
	fflush(stdout);
	printf("Enter real and imaginary respectively: ");
	fflush(stdout);
	scanf("%f %f", &n1.real, &n1.imag);

	printf("\nFor 2nd complex number\n");
	fflush(stdout);
	printf("Enter real and imaginary respectively: ");
	fflush(stdout);
	scanf("%f %f", &n2.real, &n2.imag);
	add(n1,n2);
}

