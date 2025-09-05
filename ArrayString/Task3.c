/*
 * Task3.c
 *
 *  Created on: 5 Sep 2025
 *      Author: Esraa Salah
 */
#include<stdio.h>/*
int main()
{
	int arr[10][10] , trans[10][10] ,i,j ;
	printf("Enter number of Rows followed by number of Columns");
	fflush(stdout);
	scanf("%d%d",&i,&j);
	for (int m =0;m<i;m++)
	{
		for(int n=0;n<j;n++)
		{
			printf("Enter element%d%d :",m,n);
			fflush(stdout);
			scanf("%d",&arr[m][n]);
		}

	}
	printf("Entered matrix :\n");
	fflush(stdout);
	for (int m =0;m<i;m++)
	{
		for(int n=0;n<j;n++)
		{
			printf("%d      ",arr[m][n]);
			fflush(stdout);
		}
		printf("\n");
		fflush(stdout);

	}


	printf("Transpose of matrix:\n");
	fflush(stdout);
	for (int m =0;m<j;m++)
	{
		for(int n=0;n<i;n++)
		{
			if(n==m)
			{
				trans[m][n]=arr[m][n];
			}
			else
			{
				trans[m][n]=arr[n][m];
			}
			printf("%d      ",trans[m][n]);
			fflush(stdout);
		}
		printf("\n");
	}


}
*/

