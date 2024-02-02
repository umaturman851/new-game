#include"global.h"
int main(void)
{
        char nickname[9];
        int player_gold = 0;
        char action;

        hello(nickname);

        printf("Your attacked by goblin. Press 'A' to atack or 'R' to run \r\n");
        action = getchar();

        while(action != 'r' && action != 'R')
        {


                if(action == 'a' || action == 'A')
                {
                        battle(&player_gold);

                }

                printf("Next action ? \n");
                getchar(); //clean buffer
                action = getchar();

        }
                if(action == 'r' || action == 'R')
                {
                   printf("You got %d gold! Good job! \r\n", player_gold);
                }
    return 0;

}  
