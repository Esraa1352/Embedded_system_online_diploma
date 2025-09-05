/*
 * Task3.c
 *
 *  Created on: 5 Sep 2025
 *      Author: Esraa Salah
 */

#include<stdio.h>
#include<string.h>

int main()
{
char string[100],reverse[100];
   printf("Enter String: ");
   fflush(stdout);
   gets(string);
   int len =strlen(string);
   reverse[len]='\0';
   for(int i=0;string[i]!='\0';i++)
     {
  		   reverse[i]=string[--len];
     }
     printf("Reversed string is: %s ",reverse);
}
