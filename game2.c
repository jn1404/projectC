/* Text Based Game */

#include <stdio.h>
#include <stdlib.h>

int main()
{ 
	char user;
	char menu;
	char choice;

	while(1) // Infinite loop
	{
		printf("\nYou are standing in a mossy field and see an old house in the distance. 
		There is a letter here. ");
		char *menu = "\n1. read letter ";
		prints("\n %s",menu);
		fgets(choice, sizeof choice, stdin);
		switch (choice){
			case '1':
				printf("Welcome to CaseQuest!")
				char *menu = "\n1. go north \n2. go south";
				prints("\n %s",menu);
				fgets(choice, sizeof choice, stdin);
				switch (choice){
					case '1':
						printf("\nYou are in front of the house. The door seems to be unlocked.")
						char *menu = "\n1. open door";
						prints("\n %s",menu);
						fgets(choice, sizeof choice, stdin);
						switch (choice){
							case '1':
								printf("\nThe interior is quaint and dark. There is a small kitchen to your right, a 
		basement to your left and stairs in front of you.")
								char *menu = "\n1. go right \n2. go left \n3. take stairs";
								prints("\n %s",menu);
								fgets(choice, sizeof choice, stdin);
								switch (choice){

						}
					case '2':
						printf("\nThere seems to be a bridge in the distance.")

				}
		}

	/* STORY: LIKE ZORK 
	Intro:
	You are standing in a mossy field and see an old house in the distance. 
	There is a letter here. 
	>read letter
	"Welcome to 'title of game'"
	Depending on what user inputs: 
	>go north
	Front of House
	You are in front of the house. The door seems to be open. 
		>enter door 
		Floor 1 
		The interior is quaint and dark. There is a small kitchen to your right, a 
		basement to your left and stairs in front of you.
		>go left 
		You walk down the stairs into a dark basement. There is something in the corner.
			>check corner
			You have found a short dagger. It is decorated with many engravings.
			>go upstairs
			You are back in the first floor. 
		>go right
		You walk into the kitchen. There is some food cooking in a large pot.
		>
	>go south 
	The Woods
	There seems to be a bridge in the distance. 
	
		>go south
		There seems to be a suspicious looking small man under the bridge. 
			
			>go south
			The small man appears to be a goblin. It stands up and runs after you. 
			
				>fight 
				The goblin knocks you out and takes you to its cave. 
					>
				
				>run
				You run towards the house. The goblin stops chasing you and returns 
				to the bridge. 
			
	
	
}
