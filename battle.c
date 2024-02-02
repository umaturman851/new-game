#include"global.h"




int battle(int *player_gold)
{
         int goblin_gold = 15;
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


