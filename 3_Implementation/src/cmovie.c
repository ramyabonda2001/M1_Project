#include "declaration.h"
//#include "movie_details.c"
int c_movie(void)
{
	int i;
	printf("\t\t\twhich movie ticket you want to cancel\n");
	printf("\t\t\t-------------------------------------\n");
	printf("\t\t\tpress 1 for Shershaah\n\n");
	printf("\t\t\tpress 2 for Mimi\n\n");
	printf("\t\t\tpress 3 for Venom: Let There Be Carnage\n\n");
	scanf("%d",&i);
	return i;		
}