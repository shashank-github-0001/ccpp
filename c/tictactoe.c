#include <stdio.h>

#define COL 3
#define ROW 3

int main() {
    int grid[COL][ROW] = {0};
    printf("this is a game of tictactoe\n");
    printf("please play the game according to the rules and dont give invalid input\n");
    printf("please give the number from 0-9\n");
    int current_input;
    int current_row;
    int current_column;
    char current_ans;
    for ( int i = 0; i<ROW; i++) {
        for ( int j = 0; j<COL; j++) {
            scanf("%d", &current_input);
            current_row = current_input/3;
            current_column = current_input%3;
            scanf("%c", &current_ans);
            grid[current_row][current_column] = current_ans;
            for ( int k = 0; k<ROW; k++) {
                for ( int l = 0; l<COL; l++) {
                   printf("%c", grid[k][l]); 
                }
                printf("\n");
            }
        }
    }
    for ( int i = 0; i<ROW; i++) {
        for ( int j = 0; j<COL; j++) {
            printf("%c", grid[i][j]);
        }
        printf("\n");
    }
}
