#include <iostream>
#include <cstdlib>
#include <stdlib.h>
using namespace std; 

// Array for the board
char board[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
};

// Variable Declaration
int choice;
int row, column;
char turn = 'X';
bool draw = false;


// Clear screen after each turn
void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

// Function to display the game board using loops
void display_board() {
    cout << "PLAYER 1 [X]  PLAYER 2 [O]\n\n";

    for (int i = 0; i < 3; i++) {
        cout << "     |     |     \n";
        for (int j = 0; j < 3; j++) {
            cout << "  " << board[i][j] << "  ";
            if (j != 2) cout << "|";
        }
        cout << "\n";
        if (i != 2) cout << "_____|_____|_____\n";
    }
    cout << "     |     |     \n\n";
}

// Function to handle player input and update the board
void player_turn() {
    if (turn == 'X') {
        cout << "PLAYER 1 [X] turn: ";
    }
    else {
        cout << "PLAYER 2 [O] turn: ";
    }

    cin >> choice;

    if (choice < 1 || choice > 9) {
        cout << "Invalid Move. Try again.\n";
        player_turn();
        return;
    }

    row = (choice - 1) / 3;
    column = (choice - 1) % 3;

    if (board[row][column] != 'X' && board[row][column] != 'O') {
        board[row][column] = turn;
        turn = (turn == 'X') ? 'O' : 'X';
    }
    else {
        cout << "Box already filled! Please choose another!\n";
        player_turn();
    }


    display_board();
}

// Function to check game status (win, draw, or continue)
bool gameover() {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == board[i][1] && board[i][0] == board[i][2]) ||
            (board[0][i] == board[1][i] && board[0][i] == board[2][i])) {
            return false;
        }
    }

    // Check diagonals
    if ((board[0][0] == board[1][1] && board[0][0] == board[2][2]) ||
        (board[0][2] == board[1][1] && board[0][2] == board[2][0])) {
        return false;
    }

    // Check if game is still ongoing
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return true;
            }
        }
    }

    draw = true;
    return false;
}

// Main function
int main() {
    cout << "\nT I C - T A C - T O E - G A M E\n";
    cout << "FOR 2 PLAYERS\n\n";

    display_board();

    while (gameover()) {
        player_turn();
    }

    if (!draw) {
        if (turn == 'X') {
            cout << "\nCongratulations! Player 2 has won the game!\n";
        }
        else {
            cout << "\nCongratulations! Player 1 has won the game!\n";
        }
    }
    else {
        cout << "\nGAME DRAW!!!\n";
    }

    return 0;
}
