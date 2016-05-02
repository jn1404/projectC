#include <stdio.h>
#include <stdlib.h>


int main()
{ 
	char user;
	char menu;
	char choice;
	int x = 0;
	int y = 0;
	char **scenario[100][100];
	
	

	scenario[0][0] = "\nYou wake upin a mossy field and see an old house in the distance. There is a sign here that reads:\n\nWelcome to 'Mazequest'!\nThis game puts you in a world made of rooms, laid out in a grid-like system.\nYour goal here is unclear: there are multiple ways of winning (or losing) the game.\nYou'll be given some tools to use in your quest, but be careful when making choices!\n\nHOW TO PLAY:\nFor each situation, you'll be given a limited number of options, represented as numbers.\nType the number of your choice into the console to make your move\n\nTIPS:\n> Violence is not always the correct choice. Your brain is one of your most valuable tools!\n> Some tools are better for certain scenarios. Try to analize each situation carefully!\n> There's a way out of here, but you can also try to look for treasure!\n\nGood Luck!\n\n 1. Go East\n 2. Go South";
	scenario[1][0] = "\n TEST";
	while(1) // Infinite loop
	{
		printf("%s\n", scenario [x][y]);
		scanf("%s", &choice);
		switch(choice){
			case '1':
				x = x + 1;
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
				printf("\n You can't really do that. Don't try to break the game, punk!\n");
				break;
			}
}
}
