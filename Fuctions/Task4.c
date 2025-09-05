/*
 * Task4.c
 *
 *  Created on: 5 Sep 2025
 *      Author: Esraa Salah
 */

#include<stdio.h>
int power(int n ,int p)
{
	if(p!=0)
	{
	return (n*power(n,p-1));
	}
	else
	{
		return 1;
	}
}
int main()
{
	int n,p;
	printf("Enter base number : ");
	fflush(stdout);
	scanf("%d",&n);
	printf("Enter power number (positive integer) : ");
	fflush(stdout);
	scanf("%d",&p);
	printf("%d^%d = %d ",n,p,power(n,p));

}

