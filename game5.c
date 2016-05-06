#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Scenario{
	char scenario[100];
	char fight[10];
	char riddle[10];
	int x;
	int y;
};

int main()
{ 
	char user;
	char menu;
	char choice;
	char str1[5];
	char str2[6];
	int x = 0;
	int y = 0;
	char answer[4] = "time";
	struct Scenario **scenario[100][100];
	
	
	scenario[0][0] = "\nYou wake up in a mossy field and see an old house in the distance. There is a sign here that reads:\n\nWelcome to 'Mazequest'!\nThis game puts you in a world made of rooms, laid out in a grid-like system.\nYour goal here is unclear: there are multiple ways of winning (or losing) the game.\nYou'll be given some tools to use in your quest, but be careful when making choices!\n\nHOW TO PLAY:\nFor each situation, you'll be given a limited number of options, represented as numbers.\nType the number of your choice into the console to make your move\n\nTIPS:\n> Violence is not always the correct choice. Your brain is one of your most valuable tools!\n> Some tools are better for certain scenarios. Try to analyze each situation carefully!\n> There's a way out of here, but you can also try to look for treasure!\n\nGood Luck!\n\n 1. Go East\n 2. Go South";
	scenario[1][0] = "\n You hear a cry to the east. There is a beautiful woman walking to the south.\n\n 1. Go East 2. Go South";
	scenario[0][1] = "\n You approach a bridge with what looks to be a small man. Be careful. \n\n 1. Approach bridge. ";
	scenario[1][1] = "\n fight";
	scenario[2][0] = "\n You see a ";
	scenario[0][2] = "\n TEST5";



	while(1) 
	{	
		//check type of scenario
		//if en4emy use random to see player survuves
		//if regular tppe then print scenario 		
		strcpy(str1, "fight");
		strcpy(str2, "riddle");
		int battle = strcmp(scenario[x][y], str1);
		int riddle = strcmp(scenario[x][y], str2);
	
		if (battle == 0){
			printf("Battle ensues.");
			int r = rand() % 11; // rand # between 0 - 10 
			if (r < 5)
				x = x + 1; // Game over 
			else 
				y = y + 1; // room 
			
		else if (riddle == 0){
			printf("")
			fgets(user, sizeof user, stdin);
			if (user == answer)
				y = y + 1; // room
			else 
				y = y - 1; // Game over
		}
		else 
			printf("%s\n", scenario [x][y]->scenario);
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
}