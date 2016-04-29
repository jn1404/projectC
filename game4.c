#include <stdio.h>
#include <stdlib.h>


int main()
{ 
	char user;
	char menu;
	char choice;
	int x = 0;
	int y = 0;
	char scenario[100][100];
	char choice;

	scenario[0][0] = "\n You wake up"

	while(1) // Infinite loop
	{
		printf("%s\n", scenario [x][y]);
		fgets (choice, sizeof choice, stdin)
		switch(choice){
			case '1':
				x = x + 1
				break;
			case '2':
				y = y + 1;
				break;
			case '3':
				x = x - 1;
				break;
			case '4':
				y = y - 1;
				break;
			default:
				printf("\n You can't really do that. Don't try to break the game, punk!\n")
				break;
			}

