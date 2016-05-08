#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Scenario{
	char scenario[50];
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
	char str1[12] = "fight goblin";
	char str2[4] = "talk";
	int x = 0;
	int y = 0;
	char answer[4] = "time";
	struct Scenario **scenario[50][50];
	
	scenario[50][50] = "";
	 

	while(1) 
	{	
		//check type of scenario
		//if en4emy use random to see player survuves
		//if regular tppe then print scenario 		
		int goblinbattle = strcmp(&(*scenario[x][y]), str1);
		int riddle = strcmp(&(*scenario[x][y]), str2);
		/* strcpy(str2, "talk");
		strcpy(str3, "fight banshee");
		strcpy(str4, "fight dragon");
		strcpy(str5, "fight cannibals");
		
		int bansheebat = strcmp(scenario[x][y], str3); // 8
		int dragonbat = strcmp(scenario[x][y], str4); // 5
		int cannbat = strcmp(scenario[x][y], str5); // 7
		int riddle = strcmp(scenario[x][y], str2);
		*/
		if (goblinbattle == 0){
			printf("Battle ensues.");
			int r = rand() % 11; // rand # between 0 - 10 
			if (r < 2)
				x = x + 1; // Game over 
			else 
				y = y + 1; // room 
		}
			else {
			printf("%s\n", (*scenario[x][y])->scenario);
			scanf("%s", &choice);
			switch(choice){
			case '1':
				x = x + 1;
				printf("%d",x);
				printf("%d",y);
				break;
			case '2':
				y = y + 1;
				printf("%d",x);
				printf("%d",y);
				break;
			case '3':
				x = x - 1;
				printf("%d",x);
				printf("%d",y);
				break;
			case '4':
				y = y - 1;
				printf("%d",x);
				printf("%d",y);
				break;
			case 'time':
				x = x + 1;
			default:
				printf("\n You can't really do that. Don't try to break the game, punk!\n");
				break;
			}
		

	/*		
		if (riddle == 0){
			printf(" ")
			fgets(user, sizeof user, stdin);
			if (user == answer)
				y = y + 1; // room
			else 
				y = y - 1; // Game over
		}
		else 
			printf("%s\n", scenario[x][y]);
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
			*/
}
}
}