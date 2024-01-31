#include<stdio.h>
#include<string.h>

int main(void)
{    
	char nickname[9];
	int length;

	printf("What your name? \r\n");
	fgets(nickname, sizeof(nickname), stdin);
	//size_t len = strlen(nickname);
	printf("sizeof: %ld \n", sizeof(nickname));
	length = strlen(nickname);
	printf("length: %d, simbol: %d \n", length, nickname[length-1]);
	for(int i =0; i < sizeof(nickname); i++)
	{
		
	if(nickname[i] =='\n')
	{
		nickname[i]='\0';
		break;
	}

	}
	printf("Hi, %s \n", nickname);
	length=strlen(nickname);
	printf("Length nickname: %d\n", length);
	return 0;
}

	/*
        int goblin_gold = 15;
        int goblin_hp;
	int player_gold = 0;
        char action;
        
	
	printf("Your attacked by goblin. Press 'A' to atack or 'R' to run \r\n");
        action = getchar();

	while(action != 'r' && action != 'R')
	{


		if(action == 'a' || action == 'A')
		{
		for(goblin_hp = 3; goblin_hp >=0; goblin_hp-- )
			{
				if(goblin_hp != 3)
        		printf("Your kicke goblin. Hoblin HP: %d\r\n", goblin_hp);
			if(goblin_hp == 0)
		{
        		printf("Your killed it. \r\n");
			player_gold += goblin_gold;
        		printf("Your found goblin_gold %d \r\nAnd you have %d gold total \r\n"
					, goblin_gold, player_gold);
			break;
       		}
			}

	       	}
        	
		printf("Next action ? \n");
		getchar(); //clean buffer
        	action = getchar();
       
	}
      		if(action == 'r' || action == 'R')
		{
		   printf("You have decided to run away! Good bye! \r\n");  
		}	
    return 0;

}  */
