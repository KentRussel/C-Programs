#include <stdio.h>
#include <stdlib.h>

int main() {
    int player1 = 0, player2 = 0;
    time_t t;
    srand ((unsigned) time&t))
    player2 = rand() % 4;
    printf("ROCK-PAPER-SCISSORS\n\n1. Rock\n2. Paper\n3. Scissors");
    scanf("%d", &player1);
    printf("\n\n");

    if(player1 == 1)
        printf("Rock");
    if(player1 == 2)
        printf("Paper");
    if(player1 == 3)
        printf("Scissors");  

    if(player2 == 0)
        printf(" vs Rock");
    if(player2 == 1)
        printf(" vs Paper");
    if(player2 == 2)
        printf(" vs Scissors");  

    if(player1 == 1 && player2 == 2 || player1 == 2 && player2 == 0 || player1 == 3 && player2 == 1)
        printf("\n\nYOU WIN!");
    if(player1 == 1 && player2 == 0 || player1 == 2 && player2 == 1 || player1 == 3 && player2 == 2)
        printf("\n\nEQUALITY");
    if(player1 == 1 && player2 == 1 || player1 == 2 && player2 == 2 || player1 == 3 && player2 == 0)
        printf("\n\nYOU LOSE!");

    return 0;
}
