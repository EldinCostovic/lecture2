#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int i;
    srand((unsigned int)time(NULL));
    int randomNumber = rand() % 5 + 0;
    char words[5][5] = {
        {'h','e','l','l','o'},
        {'w','o','r','l','d'},
        {'c','o','d','e','s'},
        {'m','a','j','k','a'},
        {'s','t','d','i','o'}
    };
    printf("\n");

    int attempt = 0;
    char attWord[5];
    int found;
    int j;
    int g=0;
    do{
        printf("attenpt: ");
        scanf("%s", attWord);
        for(i = 0 ; i < 5 ; i ++){
            //if the letter exists
			if(attWord[i] == words[randomNumber][i]){
                printf("G = %c \n", attWord[i]);
                g = g + 1;
            }
            
            //if the letter is there or it isnt there
            else{
                for (j = 0; j < 5; j++) {
                    if (attWord[i] == words[randomNumber][j]) {
                        found = 1;
                        break;
                    }
                }
                if (found >= 1) {
                    printf("Y = %c\n", attWord[i]); 
                } 
				
				else{
                    printf(". = %c\n", attWord[i]); 
                }
                found = 0;
            }
		}
		
		if(g > 4){
                printf("You win");
                attempt=7;
            }
            
            else{
                g=0;
            }
            
        attempt++;
    }while (attempt < 5);
    
        printf("\n");
   

    printf("words is :");
    for(i = 0; i < 5; i++) {
        printf("%c", words[randomNumber][i]);
    }
    
    return 0;
}
