/*
 * Task4.c
 *
 *  Created on: 11 Sep 2025
 *      Author: Esraa Salah
 */

#include<stdio.h>
#include<string.h>

struct sData{
	char name[50];
	int roll_num;
	float mark;
};
struct sData gstudents[10] ;

int main ()
{
	printf("Enter information of students:\n");
	fflush(stdout);
	for(int i=0;i<10;i++)
	{
	gstudents[i].roll_num=i+1;
	printf("For role number %d :\n",gstudents[i].roll_num);
	fflush(stdout);
	printf("Enter name :");
	fflush(stdout);
	fgets(gstudents[i].name,sizeof(gstudents[i].name),stdin);
	gstudents[i].name[strcspn(gstudents[i].name,"\n")]='\0';
	printf("Enter marks:");
	fflush(stdout);
	scanf("%f",&gstudents[i].mark);
	getchar();
	}
	printf("Displaying Information\n");
	fflush(stdout);
	for(int j=0;j<10;j++)
	{
		printf("Information for roll number %d:\nName: %s\nMarks: %.2f\n\n", gstudents[j].roll_num, gstudents[j].name, gstudents[j].mark);
		fflush(stdout);
	}
}

