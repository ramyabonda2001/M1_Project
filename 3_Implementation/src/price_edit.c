#include "declaration.h"
#include "string.h"
//#include "movie_details.c"

int change_prize(int price)
{
	char pass[10],pas[10]="pass";
	printf("Enter the password to change price of ticket: ");
	scanf("%4s",pass);
	if (strcmp(pass,pas)==0)
	{
		printf("Please enter new price: ");
		scanf("%d",&price);
		//system("PAUSE");
		//system("CLS");
	}
	else 
		printf("The entered password is wrong! Please Enter Correct Password\n  ");
	return price;
}
