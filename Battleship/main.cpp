#include <iostream>
#include <windows.h>
#include <time.h>
#include <conio.h>
#include <cstdlib>

using namespace std;
//Global Variables :(
int playerOneHealth = 17;
int playerTwoHealth = 17;
int compOneHealth = 17;
int compTwoHealth = 17;

void populateBoard(char* board[10][10]);
void printBoard(char* board[10][10]);
void userPlacement(char* Board[10][10]);
void compPlacement (char* board[10][10]);
int playerOneTurn(int compHealth, char* compBoard[10][10], char* blankBoard[10][10]);
int playerTwoTurn (int compHealth, char* compBoard[10][10], char* blankBoard[10][10]);
int easyComputer(int playerHealth, char*playerBoard[10][10]);
int mediumComputer(int playerHealth, char* playerBoard[10][10]);
int hardComputer (int playerHealth, char* playerBoard[10][10]);
int computerOne (int playerHealth, char* playerBoard[10][10]);
int computerTwo (int playerHealth, char* playerBoard[10][10]);
int tenRandom();

void userPlacement(char* Board[10][10]){

    HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    int xCord;
    int yCord;
    SetConsoleTextAttribute(hConsole, 7);
    cout << endl;
    cout << "Please enter 1st Aircraft Carrier x Coordinate: ";
    cin >> xCord;
    cout << "Please enter 1st Aircraft Carrier y Coordinate: ";
    cin >> yCord;
    Board[xCord][yCord] = "A";

    cout << "Please enter 2nd Aircraft Carrier x Coordinate: ";
    cin >> xCord;
    cout << "Please enter 2nd Aircraft Carrier y Coordinate: ";
    cin >> yCord;
    Board[xCord][yCord] = "A";

    cout << "Please enter 3rd Aircraft Carrier x Coordinate: ";
    cin >> xCord;
    cout << "Please enter 3rd Aircraft Carrier y Coordinate: ";
    cin >> yCord;
    Board[xCord][yCord] = "A";

    cout << "Please enter 4th Aircraft Carrier x Coordinate: ";
    cin >> xCord;
    cout << "Please enter 4th Aircraft Carrier y Coordinate: ";
    cin >> yCord;
    Board[xCord][yCord] = "A";

    cout << "Please enter 5th Aircraft Carrier x Coordinate: ";
    cin >> xCord;
    cout << "Please enter 5th Aircraft Carrier y Coordinate: ";
    cin >> yCord;
    Board[xCord][yCord] = "A";

    system("CLS");
    printBoard(Board);
    SetConsoleTextAttribute(hConsole, 7);
    cout << "Your Carrier Has Been Deployed!!!" << endl << endl;


    cout << "Please enter 1st Battleship x Coordinate: ";
    cin >> xCord;
    cout << "Please enter 1st Battleship y Coordinate: ";
    cin >> yCord;
    Board[xCord][yCord] = "B";

    cout << "Please enter 2nd Battleship x Coordinate: ";
    cin >> xCord;
    cout << "Please enter 2nd Battleship y Coordinate: ";
    cin >> yCord;
    Board[xCord][yCord] = "B";

    cout << "Please enter 3rd Battleship x Coordinate: ";
    cin >> xCord;
    cout << "Please enter 3rd Battleship y Coordinate: ";
    cin >> yCord;
    Board[xCord][yCord] = "B";

    cout << "Please enter 4th Battleship x Coordinate: ";
    cin >> xCord;
    cout << "Please enter 4th Battleship y Coordinate: ";
    cin >> yCord;
    Board[xCord][yCord] = "B";

    system("CLS");
    printBoard(Board);
    SetConsoleTextAttribute(hConsole, 7);
    cout << "Your Battleship Has Been Deployed!!!" << endl << endl;


    cout << "Please enter 1st Cruiser x Coordinate: ";
    cin >> xCord;
    cout << "Please enter 1st Cruiser y Coordinate: ";
    cin >> yCord;
    Board[xCord][yCord] = "C";

    cout << "Please enter 2nd Cruiser x Coordinate: ";
    cin >> xCord;
    cout << "Please enter 2nd Cruiser y Coordinate: ";
    cin >> yCord;
    Board[xCord][yCord] = "C";

    cout << "Please enter 3rd Cruiser x Coordinate: ";
    cin >> xCord;
    cout << "Please enter 3rd Cruiser y Coordinate: ";
    cin >> yCord;
    Board[xCord][yCord] = "C";

    system("CLS");
    printBoard(Board);
    SetConsoleTextAttribute(hConsole, 7);
    cout << "Your Cruiser Has Been Deployed!!!" << endl << endl;


    cout << "Please enter 1st Destroyer x Coordinate: ";
    cin >> xCord;
    cout << "Please enter 1st Destroyer y Coordinate: ";
    cin >> yCord;
    Board[xCord][yCord] = "D";

    cout << "Please enter 2nd Destroyer x Coordinate: ";
    cin >> xCord;
    cout << "Please enter 2nd Destroyer y Coordinate: ";
    cin >> yCord;
    Board[xCord][yCord] = "D";

    cout << "Please enter 3rd Destroyer x Coordinate: ";
    cin >> xCord;
    cout << "Please enter 3rd Destroyer y Coordinate: ";
    cin >> yCord;
    Board[xCord][yCord] = "D";

    system("CLS");
    printBoard(Board);
    SetConsoleTextAttribute(hConsole, 7);
    cout << "Your Destroyer Has Been Deployed!!!" << endl << endl;


    cout << "Please enter 1st Submarine x Coordinate: ";
    cin >> xCord;
    cout << "Please enter 1st Submarine y Coordinate: ";
    cin >> yCord;
    Board[xCord][yCord] = "S";

    cout << "Please enter 2nd Submarine x Coordinate: ";
    cin >> xCord;
    cout << "Please enter 2nd Submarine y Coordinate: ";
    cin >> yCord;
    Board[xCord][yCord] = "S";

    system("CLS");
    printBoard(Board);
    SetConsoleTextAttribute(hConsole, 7);
    cout << "Your Submarine Has Been Deployed!!!" << endl << endl;

    system("CLS");
    printBoard(Board);
    SetConsoleTextAttribute(hConsole, 7);
    cout << "All of your ships have been successfully deployed!!!" << endl << endl;

}

void populateBoard(char* board[10][10]){
	int row = 10;
	int col = 10;
	// Initializes the board, loops stops at 10 for
	// the number of rows and columns
	for (int x = 0; x < row; x++) {
		for (int y = 0; y < col; y++) {
			board[x][y] = "~";
		}
	}
}

void printBoard(char* board[10][10]) {
	int row = 10;
	int col = 10;

	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


    system("CLS");
	for (int x = 0; x < row; x++) {
		for (int y = 0; y < col; y++) {
                 SetConsoleTextAttribute(hConsole, 25);
				//If number is in its correct place sets
				//color to be green
				if (board[x][y] == "O"){
					SetConsoleTextAttribute(hConsole, 26);}

                if (board[x][y] == "X")
					//if number is in incorrect place sets
					//color to be red
					SetConsoleTextAttribute(hConsole, 28);

                if (board[x][y] == "A")
                    SetConsoleTextAttribute(hConsole, 30);

                if (board[x][y] == "B")
                    SetConsoleTextAttribute(hConsole, 30);

                if (board[x][y] == "C")
                    SetConsoleTextAttribute(hConsole, 30);

                if (board[x][y] == "D")
                    SetConsoleTextAttribute(hConsole, 30);

                if (board[x][y] == "S")
                    SetConsoleTextAttribute(hConsole, 30);

                if (x == 0 && y == 0){
                    SetConsoleTextAttribute(hConsole, 8);
                    cout << "  0 1 2 3 4 5 6 7 8 9" << endl << endl;
                    }
                if (y == 0){
                        SetConsoleTextAttribute(hConsole, 8);
                    cout << x << " ";
                    SetConsoleTextAttribute(hConsole, 25);
                    cout << board[x][y];
                }
                else cout << " " << board[x][y];

		}
		cout << endl;
	}
    SetConsoleTextAttribute(hConsole, 7);
}

void compPlacement (char* board[10][10]){
    HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    int xCord = 0;
    int yCord = 0;
    int nope[10][10];
    int z = 0;

    xCord = tenRandom();
    yCord = tenRandom();

    //Air Craft Carrier Placement
    board[xCord][yCord] = "A";
   if (xCord > 5){
        xCord--;
     board[xCord][yCord] = "A";
        xCord--;
     board[xCord][yCord] = "A";
        xCord--;
     board[xCord][yCord] = "A";
        xCord--;
     board[xCord][yCord] = "A";
        xCord--;
   }
            xCord++;
     board[xCord][yCord] = "A";
             xCord++;
     board[xCord][yCord] = "A";
             xCord++;
     board[xCord][yCord] = "A";
             xCord++;
     board[xCord][yCord] = "A";


    //Battleship Placement

    xCord = tenRandom();
    yCord = tenRandom();

    while (board[xCord][yCord] != "~"){
    xCord = tenRandom();
    yCord = tenRandom();
    }

    board[xCord][yCord] = "B";


   if (yCord > 6){
        yCord--;
     board[xCord][yCord] = "B";
        yCord--;
     board[xCord][yCord] = "B";
        yCord--;
     board[xCord][yCord] = "B";
        yCord--;

   }
            yCord++;
     board[xCord][yCord] = "B";
             yCord++;
     board[xCord][yCord] = "B";
             yCord++;
     board[xCord][yCord] = "B";


    xCord = tenRandom();
    yCord = tenRandom();

    while (board[xCord][yCord] != "~"){
    xCord = tenRandom();
    yCord = tenRandom();
    }

    board[xCord][yCord] = "C";


   if (yCord > 7){
        yCord--;
     board[xCord][yCord] = "C";
        yCord--;
     board[xCord][yCord] = "C";
        yCord--;


   }
            yCord++;
     board[xCord][yCord] = "C";
             yCord++;
     board[xCord][yCord] = "C";






   if (xCord > 7){
        xCord--;
     board[xCord][yCord] = "D";
        xCord--;
     board[xCord][yCord] = "D";
        xCord--;
     board[xCord][yCord] = "D";
        xCord--;

   }
            xCord++;
     board[xCord][yCord] = "D";
             xCord++;
     board[xCord][yCord] = "D";
             xCord++;
     board[xCord][yCord] = "D";



    xCord = tenRandom();
    yCord = tenRandom();

    while (board[xCord][yCord] != "~"){
    xCord = tenRandom();
    yCord = tenRandom();
    }

    board[xCord][yCord] = "S";


   if (yCord < 9){
        yCord++;
     board[xCord][yCord] = "S";
   }
    else yCord--;
    board[xCord][yCord] = "S";



}

int tenRandom(){
int z = (rand() % 10);
return z;
}

int computerOne (int playerHealth, char* playerBoard[10][10]){
int xCord;
int yCord;

xCord = tenRandom();
yCord = tenRandom();

printBoard(playerBoard);


if (playerBoard[xCord][yCord] == "~"){
    playerBoard[xCord][yCord] = "X";
printBoard(playerBoard);

    cout << "Computer twos health " << compTwoHealth << endl << endl;

    cout << "They Missed!!!" << endl;
    cout << "Press enter to end computer turn" << endl;
    _getch();
    return playerHealth;
}
if (playerBoard[xCord][yCord] != "~" ){
    playerBoard[xCord][yCord] = "O";
   compTwoHealth--;
    printBoard(playerBoard);

    cout << "Computer twos health: " << compTwoHealth << endl << endl;

    cout << "They Hit! :(" << endl;
    cout << "Press enter to end computer turn" << endl;
    _getch();
    return playerHealth;

}
}

int computerTwo (int playerHealth, char* playerBoard[10][10]){
int xCord;
int yCord;

xCord = tenRandom();
yCord = tenRandom();

printBoard(playerBoard);


if (playerBoard[xCord][yCord] == "~"){
    playerBoard[xCord][yCord] = "X";
printBoard(playerBoard);

    cout << "Computer one's health " << compOneHealth << endl << endl;

    cout << "They Missed!!!" << endl;
    cout << "Press enter to end computer turn" << endl;
    _getch();
    return playerHealth;
}
if (playerBoard[xCord][yCord] != "~" ){
    playerBoard[xCord][yCord] = "O";
   compOneHealth--;
    printBoard(playerBoard);

    cout << "Computer one's health: " << compOneHealth << endl << endl;

    cout << "They Hit! :(" << endl;
    cout << "Press enter to end computer turn" << endl;
    _getch();
    return playerHealth;

}
}

int easyComputer(int playerHealth, char* playerBoard[10][10]){
int xCord;
int yCord;

xCord = tenRandom();
yCord = tenRandom();

printBoard(playerBoard);


if (playerBoard[xCord][yCord] == "~"){
    playerBoard[xCord][yCord] = "X";
printBoard(playerBoard);

    cout << "Your Health: " << playerOneHealth << endl << endl;

    cout << "They Missed!!!" << endl;
    cout << "Press enter to end computer turn" << endl;
    _getch();
    return playerHealth;
}
if (playerBoard[xCord][yCord] != "~" ){
    playerBoard[xCord][yCord] = "O";
    playerOneHealth--;
    printBoard(playerBoard);

    cout << "Your Health: " << playerOneHealth << endl << endl;

    cout << "They Hit! :(" << endl;
    cout << "Press enter to end computer turn" << endl;
    _getch();
    return playerHealth;

}

}

int mediumComputer(int playerHealth, char* playerBoard[10][10]){
int xCord;
int yCord;
int prevX;
int prevY;
int hitFlag = 0;

prevX = xCord;
prevY = yCord;

xCord = tenRandom();
yCord = tenRandom();



if (hitFlag == 1){
    xCord = prevX;
    yCord = prevY + 1;
    hitFlag++;
}

if (hitFlag == 2){
    xCord = prevX;
    yCord = prevY - 2;
    hitFlag = 0;
}

printBoard(playerBoard);

if (playerBoard[xCord][yCord] == "~"){
    playerBoard[xCord][yCord] = "X";
printBoard(playerBoard);
    hitFlag = 0;
    cout << "Your Health: " << playerOneHealth << endl << endl;

    cout << "They Missed!!!" << endl;
    cout << "Press enter to end computer turn" << endl;
    _getch();
    return playerHealth;
}
if (playerBoard[xCord][yCord] != "~" ){
    playerBoard[xCord][yCord] = "O";
    playerOneHealth--;
    printBoard(playerBoard);

    cout << "Your Health: " << playerOneHealth << endl << endl;

    cout << "They Hit! :(" << endl;
    cout << "Press enter to end computer turn" << endl;
    _getch();
    return playerHealth;

}

}

int hardComputer(int playerHealth, char* playerBoard[10][10]){
int xCord;
int yCord;
int prevX;
int prevY;
int hitFlag = 0;

prevX = xCord;
prevY = yCord;

xCord = tenRandom();
yCord = tenRandom();



if (hitFlag == 1){
    xCord = prevX;
    yCord = prevY + 1;
    hitFlag++;
}

if (hitFlag == 2){
    xCord = prevX;
    yCord = prevY - 2;
    hitFlag++;
}

if (hitFlag == 3){
    xCord = prevX++;
    yCord = prevY++;
    hitFlag++;
}

if (hitFlag == 4){
    xCord = prevX - 2;
    yCord = prevY;
    hitFlag = 0;
}


printBoard(playerBoard);

if (playerBoard[xCord][yCord] == "~"){
    playerBoard[xCord][yCord] = "X";
printBoard(playerBoard);
    hitFlag = 0;
    cout << "Your Health: " << playerOneHealth << endl << endl;

    cout << "They Missed!!!" << endl;
    cout << "Press enter to end computer turn" << endl;
    _getch();
    return playerHealth;
}
if (playerBoard[xCord][yCord] != "~" ){
    playerBoard[xCord][yCord] = "O";
    playerOneHealth--;
    printBoard(playerBoard);

    cout << "Your Health: " << playerOneHealth << endl << endl;

    cout << "They Hit! :(" << endl;
    cout << "Press enter to end computer turn" << endl;
    _getch();
    return playerHealth;

}

}

int playerOneTurn(int compHealth, char* compBoard[10][10], char* blankBoard[10][10]){
int xCord;
int yCord;


printBoard(blankBoard);

cout << "Opponent's Health: " << compHealth << endl << endl;

cout << "Please select x coordinate for attack" << endl;
cin >> xCord;
cout << "Please select y coordinate for attack" << endl;
cin >> yCord;

if (compBoard[xCord][yCord] == "~"){
blankBoard[xCord][yCord] = "X";
printBoard(blankBoard);
cout << "Missed!!" << endl;
cout << "Press enter to end your turn" << endl;
_getch();
return compHealth;
}

if (compBoard[xCord][yCord] != "~"){
    blankBoard[xCord][yCord] = "O";
    compOneHealth--;
    playerTwoHealth--;
    printBoard(blankBoard);
    cout << "Direct Hit!!" << endl;
    cout << "Press enter to end your turn" << endl;
    _getch();
    return compHealth;
}

}

int playerTwoTurn(int compHealth, char* compBoard[10][10], char* blankBoard[10][10]){
int xCord;
int yCord;


printBoard(blankBoard);

cout << "Opponents Health: " << playerOneHealth << endl << endl;

cout << "Please select x coordinate for attack" << endl;
cin >> xCord;
cout << "Please select y coordinate for attack" << endl;
cin >> yCord;

if (compBoard[xCord][yCord] == "~"){
blankBoard[xCord][yCord] = "X";
printBoard(blankBoard);
cout << "Missed!!" << endl;
cout << "Press enter to end your turn" << endl;
_getch();
return compHealth;
}

if (compBoard[xCord][yCord] != "~"){
    blankBoard[xCord][yCord] = "O";
    playerOneHealth--;
    printBoard(blankBoard);
    cout << "Direct Hit!!" << endl;
    cout << "Press enter to end your turn" << endl;
    _getch();
    return compHealth;
}

}



int main() {
    srand((unsigned int) time (NULL));

    HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

//Declarations
char* playerOneBoard[10][10];
char* playerOneBlankBoard[10][10];
char* playerTwoBoard[10][10];
char* playerTwoBlankBoard[10][10];
char* computerOneBoard[10][10];
char* computerTwoBoard[10][10];



int turnFlag = 0;
int gameMode;
int difficulty;

    populateBoard(playerOneBoard);
    populateBoard(playerOneBlankBoard);
    populateBoard(playerTwoBlankBoard);
    populateBoard(playerTwoBoard);
    populateBoard(computerOneBoard);
    populateBoard(computerTwoBoard);

    printBoard(computerOneBoard);

    SetConsoleTextAttribute(hConsole, 7);
    cout << endl << "Please choose game mode: " << endl;
    cout << "1: Player vs. Computer" << endl;
    cout << "2: Player vs. Player" << endl;
    cout << "3: Computer vs. Computer" << endl;
    cout << "Enter 1, 2, or 3" << endl;
    cin >> gameMode;

    if (gameMode == 1){
    compPlacement(computerOneBoard);
    userPlacement(playerOneBoard);

    cout << "Which difficulty would you like to play on?" << endl;
    cout << "1: Easy" << endl;
    cout << "2: Medium" << endl;
    cout << "3: Hard" << endl;
    cout << "Please enter 1, 2, or 3," << endl;
    cin >> difficulty;

    if (difficulty == 1){
    while ((playerOneHealth > 0) && (compOneHealth > 0)){
        playerOneTurn(compOneHealth, computerOneBoard, playerOneBlankBoard);
        easyComputer(playerOneHealth, playerOneBoard);
    }
    if (playerOneHealth < 1){
        cout << endl;
        cout << "You lost!!! :(" << endl;
    }
    if (compOneHealth < 1){
        cout << endl;
        cout << "Congrats!!! You are victorious!!!" << endl;
    }
    }

        if (difficulty == 2){
    while ((playerOneHealth > 0) && (compOneHealth > 0)){
        playerOneTurn(compOneHealth, computerOneBoard, playerOneBlankBoard);
        mediumComputer(playerOneHealth, playerOneBoard);
    }
    if (playerOneHealth < 1){
        cout << endl;
        cout << "You lost!!! :(" << endl;
    }
    if (compOneHealth < 1){
        cout << endl;
        cout << "Congrats!!! You are victorious!!!" << endl;
    }
    }

        if (difficulty == 3){
    while ((playerOneHealth > 0) && (compOneHealth > 0)){
        playerOneTurn(compOneHealth, computerOneBoard, playerOneBlankBoard);
        hardComputer(playerOneHealth, playerOneBoard);
    }
    if (playerOneHealth < 1){
        cout << endl;
        cout << "You lost!!! :(" << endl;
    }
    if (compOneHealth < 1){
        cout << endl;
        cout << "Congrats!!! You are victorious!!!" << endl;
    }
    }

    }
    if (gameMode == 2){
            cout << "Player One, Please set your ships" << endl;
         userPlacement(playerOneBoard);
                cout << "Player Two, Please set your ships" << endl;
         userPlacement(playerTwoBoard);


        while ((playerOneHealth > 0) && (playerTwoHealth > 0)){
        playerOneTurn(playerTwoHealth, playerTwoBoard, playerOneBlankBoard);
        playerTwoTurn(playerOneHealth, playerOneBoard, playerTwoBlankBoard);
    }
    if (playerOneHealth < 1){
        cout << endl;
        cout << "You lost!!! :(" << endl;
    }
    if (playerTwoHealth < 1){
        cout << endl;
        cout << "Congrats!!! You are victorious!!!" << endl;
    }

    }

        if (gameMode == 3){
         compPlacement(computerOneBoard);
        compPlacement(computerTwoBoard);


        while ((compOneHealth > 0) && (compTwoHealth > 0)){
        computerOne(compTwoHealth, computerTwoBoard);
        computerTwo(compOneHealth, computerOneBoard);
    }
    if (compOneHealth < 1){
        cout << endl;
        cout << "Computer One Lost!!!" << endl;
    }
    if (compTwoHealth < 1){
        cout << endl;
        cout << "Computer Two Lost!!!" << endl;
    }

    }



    return 0;
}
