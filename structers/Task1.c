/*
 * Task1.c
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
struct sData gstudent ;

int main ()
{
	printf("Enter information of students:\nEnter name :");
	fflush(stdout);
	fgets(gstudent.name,sizeof(gstudent.name),stdin);
	gstudent.name[strcspn(gstudent.name,"\n")]='\0';
	printf("Enter roll number:");
	fflush(stdout);
	scanf("%d",&gstudent.roll_num);
	printf("Enter marks:");
	fflush(stdout);
	scanf("%f",&gstudent.mark);
	printf("Displaying Information\n");
	printf("name:%s\nRoll:%d\nMark:%.2f\n",gstudent.name,gstudent.roll_num,gstudent.mark);

}

