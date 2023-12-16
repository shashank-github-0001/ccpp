#include <stdio.h>

typedef struct {
    char grid[3][3];
} tictactoe;

int main() {
    printf("this is a game of tictactoe\n");
    printf("please play the game according to the rules and dont give invalid input\n");
    printf("please give the number from 0-9\n");
    tictactoe test;
    for( int i = 0; i<9; i++) {
        scanf("%c", &test.grid[i%3][i/3]);
    }

    // int current_input;
    // int current_row;
    // int current_column;
    // char current_ans;
    // for ( int i = 0; i<9; i++) {
    //     scanf("%d", &current_input);
    //     current_row = current_input/3;
    //     current_column = current_input%3;
    //     scanf("%c", &current_ans);
    //     grid[current_row][current_column] = current_ans;
    //     for ( int k = 0; k<9; k++) {
    //         for ( int l = 0; l<9; l++) {
    //            printf("%c", grid[k][l]); 
    //         }
    //         printf("\n");
    //     }
    // }

}
