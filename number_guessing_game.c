#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int min, max, user_max;
    int choice, user_number, mynumber;
    min = 1;
    max = 10;
    
    srand(time(NULL));  
    mynumber = rand()%10 + 1;

    while (1){
        L1: 
           printf("~~~~~~~Menu~~~~~~~~\n");
           printf("Press 1 to play a game\n");
	       printf("Press 2 to change the max number\n");
	       printf("Press 3 to quit\n");
           scanf("%d", &choice);

        switch (choice)
        {
            case 1: while (1){
                        printf(" Enter a number between %d - %d\n", min, max);
                        scanf("%d", &user_number);
                        if(mynumber == user_number){
                            printf("Congratulations!! You have won the game!!\n");
                            goto L1;
                        }else if(mynumber > user_number){
                            printf("My number is greater than %d\n", user_number);
                        }else if(mynumber < user_number){
                            printf("My number is less than %d\n", user_number);
                        }else if(user_number == 113){
                            exit(1);
                        }else
                            printf("wrong choice!!");
                            
                    }
                    break;
                    

            case 2: printf("Enter am integer to change the maximum value\n");
                    printf("Note: Please do not enter a negative number or go above 100\n");
                    scanf("%d", &user_max);
                    max = user_max;
                    printf("You have changed the maximum value!\n");
                    break;

            case 3: printf("Thank you!! for playing and end the game.");
                    exit(1);

        }

    }
    

    return 0;
}
