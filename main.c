#include"global.h"
int main(void)
{
        char nickname[9];
        int player_gold = 0;
        char action;

        hello(nickname);
        printf("Hi, %s! What do you whant to do today?"
		       " Go to the forest to 'h'unt goblyns,"
		      " or to drink ale in the 't'avern or 'q'uit? \n", nickname); 

        printf("Your attacked by goblin. Press 'A' to atack or 'R' to run \r\n");
        
	action = getchar(); // A -> [Enter] (don't forget to wipe buffer)

        while(action != 'q' && action != 'Q')
        {


                if(action == 'h' || action == 'H')
                {
                        battle(&player_gold);

                }else
	        if(action == 't' || action == 'T')
                {
                       player_gold = tavern(player_gold);

                }

                printf("Next action ? 'H'ant or 'T'un or 'Q'uit \n");
                getchar(); //clean buffer
                action = getchar();

        }
	 printf("You earned %d gold! Good job. See you tomorrow!\n", player_gold);
		
    return 0;

}  
