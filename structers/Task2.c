/*
 * Task2.c
 *
 *  Created on: 11 Sep 2025
 *      Author: Esraa Salah
 */

#include<stdio.h>
struct sDistances
{
	int feet;
	float inch;
};
void add(struct sDistances dis1 ,struct sDistances dis2)
{
	int sum_feet;
	float sum_inches;
	sum_feet=dis1.feet+dis2.feet;
	sum_inches=dis1.inch+dis2.inch;
	if(sum_inches>=12)
	{
		sum_feet++;
		sum_inches-=12;
	}
	printf("\nSum of distances = %d' - %.2f\"\n", sum_feet, sum_inches);
}

int main()
{
    struct sDistances d1, d2;

    printf("Enter information for 1st distance\n");
    fflush(stdout);
    printf("Enter feet: ");
    fflush(stdout);
    scanf("%d", &d1.feet);
    printf("Enter inch: ");
    fflush(stdout);
    scanf("%f", &d1.inch);

    printf("\nEnter information for 2nd distance\n");
    fflush(stdout);
    printf("Enter feet: ");
    fflush(stdout);
    scanf("%d", &d2.feet);
    printf("Enter inch: ");
    fflush(stdout);
    scanf("%f", &d2.inch);
    add(d1,d2);
}

