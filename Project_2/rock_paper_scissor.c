#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int game(char comp, char you){

    if(you == comp){
        return 0;
    }
    else{
        if(you == 'r' && comp == 'p'){
            return -1;
        }
        else if(you=='p' && comp == 's'){
            return -1;
        }
        else if(you == 's' && comp == 'r'){
            return -1;
        }
        else{
            return 1;
        }
    }    
}

int main(){
    char comp,you;
    printf("\n\n\t*******************Welcome to Game : ROCK, PAPER & SCISSOR*******************\n");
    int n;
    srand(time(0));
    n=rand()%100+1;
    if(n<=33){
        comp = 'r';
    }
    else if(n>33 && n<66){
        comp = 'p';
    }
    else{
        comp = 's';
    }
    printf("Enter\n'r' for rock\n'p' for paper\n's'scissor\n-->");;
    scanf("%c",&you);
    int check = game(comp,you);
    printf("Computer has chosen.\nYour chosen option : %c\nCOmputer's chosen option : %c\n",you,comp);
    printf("\nCheck variable status : %d\n",check);
    if(check==0){
        printf("Game draw !\n");
    }
    else if(check == -1){
        printf("You lose !\n");
    }
    else if(check == 1){
        printf("You win !\n");
    }
    else{
        printf("Error !!!\n");
    }
    return 0;
    
}