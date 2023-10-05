#include <iostream>

using namespace std;
//create functions
int clearBoard(char board[3][3],int wins);
int printBoard(char board[3][3]);
int checkWin(char board[3][3],char player);
int checkBoard(char board[3][3], int row, int col);
int playerMove(char board[3][3], char player, int wins);
int main() {
  //clear board
  int rows = 2;
  int cols = 2;
  char board[3][3];
  for(int i = 0; i < 3; i++) {
    for(int r = 0; r < 3; r++) {
      board[i][r] = '-';
    }
  }
  
  //call functions
  checkBoard(board, 1, 2);
  printBoard(board);
  playerMove(board, 'X',0);
  return 0;
}
//print the board
int printBoard(char board[3][3]) {
  for(int i = 0; i < 3; i++) {
    cout << '\n';
    for(int r = 0; r < 3; r++) {
      cout << board[i][r] << '\t';
    }
  }
  
  return 0;
}

//clears the board and returns winner totals
int clearBoard(char board[3][3],int wins) {
  for(int i = 0; i < 3; i++) {
    for(int r = 0; r < 3; r++) {
      board[i][r] = '-';
    }
  }
  cout << '\n' << "wins:" << wins;
  checkBoard(board,1,2);
  printBoard(board);
  playerMove(board,'X', wins);
  return 0;
}

//player inputs a move
int playerMove(char board[3][3], char player,int wins) {
  int row;
  int col;
  cout << '\n' << "enter row: ";
  cin >> row;
  cout << '\n' << "enter col: ";
  cin >> col;
  //check if it is a valid move
  if(checkBoard(board, row, col) == 1) {
    board[row][col] = player;
    printBoard(board);
    //check if win
    if(checkWin(board,player) == 1) {
      cout << '\n' << player << " wins";
      wins++;
      clearBoard(board,wins);
      //check if tie
    } else if(checkWin(board,player) == 2) {
      cout << '\n' << "tie";
      clearBoard(board,wins);
    }
    //switch players turn
    if(player == 'X') {
      playerMove(board,'O',wins);
    } else if (player == 'O') {
      playerMove(board,'X',wins);
    } else {
      cout << "something went wrong!";
    }
    return 0;
  } else {
    //if player enters non-valid move
    cout << '\n' << "cant do that" << '\n';
    playerMove(board, player,wins);
    return 0;
  }
}
int checkWin(char board[3][3], char player) {
  //check win possibilitys
  if(board[0][0] == player && board[0][1] == player && board[0][2] == player) {
    return 1;
  } else if(board[1][0] == player && board[1][1] == player && board[1][2] == player) {
    return 1;
  } else if(board[2][0] == player && board[2][1] == player && board[2][2] == player) {
    return 1;
  } else if(board[0][0] == player && board[1][0] == player && board[2][0] == player) {
    return 1;
  } else if(board[0][1] == player && board[1][1] == player && board[2][1] == player) {
    return 1;
  } else if(board[0][2] == player && board[1][2] == player && board[2][2] == player) {
    return 1;
  } else if(board[0][0] == player && board[1][1] == player && board[2][2] == player) {
      return 1;
    }

  for(int i = 0; i < 3; i++) {
    for(int r = 0; r < 3; r++){
      if(board[i][r] == '-') {
	//empty spots still exist
	return 0;
      }
    }
  }



  //it is a tie
    return 2;

}

//check if valid move
int checkBoard(char board[3][3], int row, int col) {
  if(board[row][col] == '-') {
    return true;
  } else {
    return false;
  }
  
 



  
  return 0;
}
