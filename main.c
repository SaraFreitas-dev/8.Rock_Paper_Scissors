#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

#define ROCK "src/rock.txt"
#define PAPER "src/paper.txt"
#define SCISSORS "src/scissors.txt"
#define BANNER "src/welcome_banner.txt"

void display(const char *filename) {
    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        printf("Could not open file: %s\n", filename);
        return;
    }

    char line[256];

    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);  
    }

    fclose(file);
}

int get_random_choice(){
    return rand() % 3 + 1;
}

int user_choice(){
    int num;
    printf("Choose an option:");
    printf("\n1. Rock");
    printf("\n2. Paper");
    printf("\n3. Scissors\n");
    printf("Enter your choice: ");
    
    if (scanf("%d", &num) != 1 || num < 1 || num > 3) {
        // Clear invalid input left in buffer
        while (getchar() != '\n');
        return 0; // invalid
    }

    return num;
}

void playAgain(bool *isRunning, int wins, int losses, int ties){
    char quit;
    printf("\nFinal Score: %d Wins, %d Losses, %d Ties\n", wins, losses, ties);
    printf("\nTo quit press Q, or any other key to play again: ");
    scanf(" %c", &quit); 

    if (quit == 'q' || quit == 'Q') {
        *isRunning = false;
    }

}

void display_choices(int player_choice, int pc_choice){
switch (pc_choice){
        case 1:
            printf("\nMachine chose:\n");
            display(ROCK);
            break;
        case 2:
            printf("\nMachine chose:\n");
            display(PAPER);  
            break; 
        case 3:
            printf("\nMachine chose:\n");
            display(SCISSORS);    
            break; 
        default:
            break;
        }
        

        switch (player_choice){
        case 1:
            printf("\nYou chose:");
            display(ROCK);
            break;
        case 2:
            printf("\nYou chose:");
            display(PAPER);  
            break; 
        case 3:
            printf("\nYou chose:");
            display(SCISSORS);  
            break;   
        default:
            printf("\nUps...you choose nothing!");
            break;
        }
        
}


int main(){
    bool isRunning = true;
    int wins = 0; int losses = 0; int ties = 0;
    srand(time(NULL));


    while(isRunning){
        display(BANNER);
        printf("\n\n");
        int player_choice = user_choice();
        int pc_choice = get_random_choice();


        
        display_choices(player_choice, pc_choice);

            if(pc_choice == player_choice){
                printf("\n__________________________\n");
                printf("\nNo one wins...It's a tie !");
                printf("\n__________________________\n");
                ties++;
            } else if (
                (player_choice == 1 && pc_choice == 3) ||
                (player_choice == 2 && pc_choice == 1) ||
                (player_choice == 3 && pc_choice == 2)
            ) {
                printf("\n___________________________\n");
                printf("\nYou win! Machine destroyed!");
                printf("\n___________________________\n");
                wins++;
            } else {
                printf("\n__________________________________\n");
                printf("\nMachine wins... humans lost today.");
                printf("\n__________________________________\n");
                losses++;
            }
            playAgain(&isRunning, wins, losses, ties);
            if(!isRunning){
                printf("\nsee you next time !\n");
                break;
            }
    }

    return 0;
}







