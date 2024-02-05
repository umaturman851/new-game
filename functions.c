#include"global.h"
                        
int tavern(int player_gold)
{
	int el_mag_cost = 3; 
	if(player_gold >= 3)
	{
	printf("You have bougth mug of ale %d gold! "
		"Now you have %d gold left\n" , el_mag_cost, player_gold -= el_mag_cost);	
	}else   
	   {
	        printf("You don't have enough gold to buy an ale\n");
	   }
	return player_gold; 
}

int battle(int *player_gold)
{
	 srand(time(NULL));	
         int goblin_gold = (rand() % 15);
          for(int goblin_hp = 3; goblin_hp >=0; goblin_hp-- )
                        {
                                if(goblin_hp != 3)
                        printf("Your kicke goblin. Hoblin HP: %d\r\n", goblin_hp);
                        if(goblin_hp == 0)
                {
                        printf("Your killed it. \r\n");
                        *player_gold += goblin_gold;
                        printf("Your found goblin_gold %d \r\nAnd you have %d gold total \r\n"
                                        , goblin_gold, *player_gold);
                        break;
                }
                            }
                            return *player_gold;

}

int hello(char *nickname)
{       
        int length;
        char c;
        printf("What your name? \r\n");
        fgets(nickname, sizeof(nickname), stdin);

        length = strlen(nickname);
        
        if(nickname[length - 1] =='\n')
        nickname[length - 1]='\0';
	else while(c = (getchar()) != '\n') ;      
        
        
        return 0;
}
  


