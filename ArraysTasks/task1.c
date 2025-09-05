/*
 * task1.c
 *
 *  Created on: 4 Sep 2025
 *      Author: Esraa Salah
 */

#include<stdio.h>
int main ()
{
	printf("Enter the elements of the 1st matrix\n");
	int a[2][2];
	for (int i=0;i<2;i++)
	{
		for (int j=i;j<2;j++)
		{
			printf("Enter a%d%d",i,j);
			scanf("%d\n",a[i][j]);
		}
	}
	printf("Enter the elements of the 2nd matrix\n");
	int b[2][2];
	for (int i=0;i<2;i++)
	{
		for (int j=i;j<2;j++)
		{
			printf("Enter b%d%d",i,j);
			scanf("%d\n",a[i][j]);
		}
	}
	printf("sum of matrix :\n");
	for (int i=0;i<2;i++)
	{
		for (int j=i;j<2;j++)
		{
			printf("%d      ",a[i][j]+b[i][j]);
			if(i==1)
			{
				printf("\n");
			}
		}
	}




}
