#include"global.h"
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
        
        printf("Hi, %s \n", nickname); 

        return 0;
}
  


