#include<stdio.h>
#define AREA(r) (3.14*r*r)
int main()
{
	float r ;
	printf("please enter radius: ");
	fflush(stdout);
	scanf("%f",&r);
	printf("Area is : %.2f ",AREA(r));
}
