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
	
	scenario[0][0] = "\nYou wake up in a mossy field with nothing but a steel sword. There is a sign here that reads:\n\nWelcome to 'Mazequest'!\nThis game puts you in a world made of rooms, laid out in a grid-like system.\nYour goal here is unclear: there are multiple ways of winning (or losing) the game.\nYou may be given some tools to use in your quest, but be careful when making choices!\n\nHOW TO PLAY:\nFor each situation, you'll be given a limited number of options, represented as numbers.\nType the number of your choice into the console to make your move\n\nTIPS:\n> Violence is not always the correct choice. Your brain is one of your most valuable tools!\n> Some tools are better for certain scenarios. Try to analize each situation carefully!\n> There's a way out of here, but you can also try to look for treasure!\n\nGood Luck!\n\nYou can see a house to the east, and a bridge to the south\n\n 1. Go East\n 2. Go South";
 //HOUSE ROUTE
  scenario[1][0] = "\nYou approach a small cabin by a swamp. As you inch closer, you can hear a faint cry.\n\n1. Enter cabin\n3.Turn back";
  scenario[2][0] = "\nAs you enter the cabin, you see a young woman in a white dress. It appears she was the source of the faint cry.\nThe woman noties your presence, and turns to face you. She shoots you a piercing stare, and grins. The air suddenly feels chilly, and you feel the urge to charge at the woman.\n\n1. Attack\n2. Talk";
  scenario[3][0] = "\nThe moment you make your first sudden movement, the woman's apprearance changes. Her skin turns pale gray, her features freakishly stretched, and her eyes start to bleed.";
  scenario[4][0] = "\nThe banshee lets out a deafening screech that ruptures your eardrums, and you feel your consciousness fade as your brain leaks out of your skull.\n\n\nGAME OVER.";
  scenario[3][1] = "\nYour strike connects, and the banshee lets out a wail of pain. She reverts back to her human form.\n\n2. Next";
  scenario[2][1] = "\nYou greet the young lady.\n\n'My my, it's been a while since one of you entered my lair', she says while pointing towards a dusty skull on the ground.\n\n2. 'Uhhhhh what the hell?'";
  scenario[2][2] = "\n'Tell you what: if you can solve a riddle, I'll let you go. What's more, I'll give you a treasured possesion of mine. If you fail, I'll scoop your insides with a spoon.\n\nThe riddle is:\n\nThis thing all things devours:\nBirds, beasts, trees, flowers;\nGnaws iron, bites steel;\nGrinds hard stones to meal;\nSlays king, ruins town,\nAnd beats high mountain down.\n\n What is your answer?'\n";
  scenario[3][2] = "\nThe woman is defeated. She says:\n'Fine, you win. You're free to go. Past this house there is a beach, but I don't know much more than that.\n\nTake this as a reward for defeating me'\n\n You get a Cursed Golden Ring!!!\n\n... You're not sure you wanna keep it for long.\n\n2. Go on";
  scenario[3][3] = "\nYou can see a beach in the distance.\n\n2. Keep going";
  scenario[3][4] = "\nYou arrive at the beach the lady mentioned. It is full of indigenous men dancing around a fire.\n\nYou see a raft by the shore.\n\nYou notice the is a corpse roasting by the fire, and some of the men are gnawing at the corpses legs.\n\nSome of the cannibals spot you, and walk towards you with spears and hatchets in their hands.\n\n1. Fight\n2. Offer ring";
  scenario[4][3] = "\nDue to their lack of armor, the cannibals go down easily to your sword. However, they outnumber you, and eventually wear you down. Tired, you let your guard down and take a hatchet to your back.\n\n You spend your last conscious moments burning by the fire as a young boy nibbles at your hand.\n\nGAME OVER";
  scenario[4][4] = "\nCannibals want to battle!";
  scenario[4][5] = "\nWith some effort, you manage to slay them all. You feel horrible but hey, it's survival. You decide to take the raft by the shore out into open sea.\n\nAfter a while, you get this feeling of dread, and the pocket where you keep the ring seems to weight you down. Your worries don't last long, however, as a gargantuan serpent arises from the dark waters and swallows you whole. You really shouldn't have kept that ring.\n\nTHE END?";
  scenario[3][5] = "\nYou offer the gold ring as a token of peace, and the cannibals gladly accept it. In fact, they seem entranced by its beauty.\n\nThey decide to give you the raft by the shore in return for the cursed artifact, and you depart towards the open sea.\n\nWho knows what adventures await you in a new land.\n\nVICTORY!!! Thanks for playing!";
  
  //BRIDGE ROUTE
  
  scenario[0][1] = "\nYou approach the bridge. As you get closer a goblin comes out of hiding from under the bridge. He holds a dagger and has amailicious expression in his face.\n\n2. fight\n4. Turn back";
  scenario[0][2] = "\nGoblin wants to battle!";
  scenario[1][2] = "\nYou miss your swing, and the goblin slashes at your throat. You instantly perish. Pathetic.\n\nGAME OVER";
  scenario[0][3] = "\nYou strike the creature down, and he immediately turns to dust.\n\nHe kept a stash of goods under the bridge. Upon searching it, you find a strange book.\n\nYou got the Spell Book! Read it to unleash whatever incantations lie within!\n\nYou see some smoke coming from down the road\n\n 2. Investigate";
  scenario[0][4] = "\nThe smoke is coming from a small village. As you approach it, you notice the townspeople running frantically. A dragon swoop over the village, breathing fire upon the buildings.\n\n1. Throw sword\n2. Read Spell Book";
  scenario[1][4] = "\nYou try to hit the dragon by throwing your sword, but it easily dodges. The drake then breathes fire on you, resulting in a swift, yet painful, death. What were you thinking?\n\nGAME OVER";
  scenario[0][5] = "\nYou open the Spell Book, and read from a random page. Clouds form over the village, and a bolt of lightning shoots down on the dragon. The beast retreats to the south to treat its injuries. Rain now comes down from the clouds, putting out the village fire.\n\n2. Go South";
  scenario[0][6] = "\nThe dragon has retreated to his lair inside a cave to recover from its weakened state. This seems like the perfect time to strike.\n\n2. fight";
  scenario[1][6] = "\nAlthough it is weakened, the drake still manages to best you. You die an honorable death.\n\nGAME OVER";
  scenario[0][7] = "\nThe dragon was not at full power, and you manage to wear it down. You land a final blow that decapitates the monster.\n\nThe dragon had hoarded an impressive amount of gold and trinkets over the centuries, and it is now all yours to claim!!\n\nVICTORY!!! Thanks for playing!";
  
  //OTHER
scenario[1][1] = "\nYou've managed to break out of the game's confines. Good for you. Enjoy an eternity in the darkness alone.\n\nGAME OVER";
scenario[4][1] = "\nYou've managed to break out of the game's confines. Good for you. Enjoy an eternity in the darkness alone.\n\nGAME OVER";
scenario[4][2] = "\nYou've managed to break out of the game's confines. Good for you. Enjoy an eternity in the darkness alone.\n\nGAME OVER";
scenario[1][3] = "\nYou've managed to break out of the game's confines. Good for you. Enjoy an eternity in the darkness alone.\n\nGAME OVER";
scenario[2][3] = "\nYou've managed to break out of the game's confines. Good for you. Enjoy an eternity in the darkness alone.\n\nGAME OVER";
scenario[1][1] = "\nYou've managed to break out of the game's confines. Good for you. Enjoy an eternity in the darkness alone.\n\nGAME OVER";
scenario[2][4] = "\nYou've managed to break out of the game's confines. Good for you. Enjoy an eternity in the darkness alone.\n\nGAME OVER";
scenario[2][5] = "\nYou've managed to break out of the game's confines. Good for you. Enjoy an eternity in the darkness alone.\n\nGAME OVER";
scenario[2][6] = "\nYou've managed to break out of the game's confines. Good for you. Enjoy an eternity in the darkness alone.\n\nGAME OVER";
scenario[3][6] = "\nYou've managed to break out of the game's confines. Good for you. Enjoy an eternity in the darkness alone.\n\nGAME OVER";
scenario[4][6] = "\nYou've managed to break out of the game's confines. Good for you. Enjoy an eternity in the darkness alone.\n\nGAME OVER";
scenario[1][7] = "\nYou've managed to break out of the game's confines. Good for you. Enjoy an eternity in the darkness alone.\n\nGAME OVER";
scenario[2][7] = "\nYou've managed to break out of the game's confines. Good for you. Enjoy an eternity in the darkness alone.\n\nGAME OVER";
scenario[3][7] = "\nYou've managed to break out of the game's confines. Good for you. Enjoy an eternity in the darkness alone.\n\nGAME OVER";
scenario[4][7] = "\nYou've managed to break out of the game's confines. Good for you. Enjoy an eternity in the darkness alone.\n\nGAME OVER";



	while(1) 
	{	
		//check type of scenario
		//if en4emy use random to see player survuves
		//if regular tppe then print scenario 		
		strcpy(str1, "fight goblin");
		strcpy(str2, "talk");
		int goblinbattle = strcmp(scenario[x][y], str1);
		int riddle = strcmp(scenario[x][y], str2);
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
