/* Text Based Game */

#include <stdio.h>
#include <stdlib.h>

int main()
{ 
	char user;
	int cmp;
	int cmp2;
	int cmp3;
	int dagger;

	while(1) // Infinite loop
	{
		printf("\nYou are standing in a mossy field and see an old house in the distance. 
		There is a letter here. ");
		fgets(user, sizeof user, stdin);
		cmp = strcmp(user, "read letter");
		if (cmp == 0){
			printf("\n\nWelcome to 'title of game'");
		else
			printf("\n\nI don't know the word %s", user);
		}
		fgets(user, sizeof user, stdin);
		cmp2 = strcmp(user, "go north");
		if (cmp2 == 0){						// if player goes north
			printf("\nYou are in front of the house. The door seems to be unlocked.")
			fgets(user, sizeof user, stdin);
			cmp3 = strcmp(user, "open door");
			if (cmp3 == 0){
				printf("\n The interior is quaint and dark. There is a small kitchen to your right, a 
		basement to your left and stairs in front of you.");
				if(){					// if player goes north

				}
				else if(){

				}
				else if(){

				}
				else(){

				}
			}
			else if(){ 		// if player tries to go back south

			}
			else(){		// if player does anything else

			}
		}
		else if(){			// if player goes south

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
