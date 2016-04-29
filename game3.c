/* Text Based Game */

#include <stdio.h>
#include <stdlib.h>


// Instead of using a 2D array, we should make a binary tree.
// http://www.cprogramming.com/tutorial/c/lesson18.html
// im guessing the game "CaseQuest"'s objective is to find some treasure and 
// open it. 
// i also was wondering if you wanted to keep track of how many times the 
// player moved to keep some type of score.

struct node
{
  int key_value;
  struct node *north;
  struct node *south;
};

struct node *root = 0;

insert(int key, struct node **leaf)
{
    if( *leaf == 0 )
    {
        *leaf = (struct node*) malloc( sizeof( struct node ) );
        (*leaf)->key_value = key;
        /* initialize to null */
        (*leaf)->north = 0;    
        (*leaf)->south = 0;  
    }
    else if(key < (*leaf)->key_value)
    {
        insert( key, &(*leaf)->north );
    }
    else if(key > (*leaf)->key_value)
    {
        insert( key, &(*leaf)->south );
    }
}

struct node *search(int key, struct node *leaf)
{
  if( leaf != 0 )
  {
      if(key==leaf->data)
      {
          return leaf;
      }
      else if(key<leaf->key_value)
      {
          return search(key, leaf->north);
      }
      else
      {
          return search(key, leaf->south);
      }
  }
  else return 0;
}




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
									case '1':
									printf("\nYou find a ")
									char *menu = "\n1. go into lobby.";
									prints("\n %s", menu);
									fgets(choice, sizeof choice, stdin);
								}
								case '2';
								printf("\nYou walk downstairs and see a dark figure in the corner.");
								char *menu = "\n1. go upstairs. \n2. approach figure.";
								prints("\n %s", menu);
								fgets(choice, sizeof choice, stdin);


						}
					case '2':
						printf("\nThere seems to be a bridge in the distance.")

				}
		}


}
