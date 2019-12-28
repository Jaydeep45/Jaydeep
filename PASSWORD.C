//Title:Password Walidator
/*Desription:A password is valid if it has minimum length 7,atleast a number
and a special charcter*/
//Design by:Jaydeep Ravat
//Compiler:Turbo C

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{       char s[20];
	int a,b,i;
	clrscr();
	printf("Enter the password:");
	fgets(s,20,stdin);
	for(i=0;i<strlen(s);i++)
	{	if(s[i]>33 && s[i]<48)
			{
				a++;
			}
			if(s[i]>47 && s[i]<58)
			{
				b++;
			}
	}
	if(a==0 && b==0 && strlen(s)<7)
	{
		printf("\nInvalid Password!");
	}
	else
	{
		printf("\nValid Password");
	}
	getch();
}