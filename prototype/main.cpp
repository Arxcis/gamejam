


#include <iostream>
using namespace std;

// ------------------------- GRAPHICS --------------------------

void showMainMenu(){

    cout << "============================================\n"
         << "                [N]EW GAME                  \n"
         << "                 ..........                 \n"
         << "                [L]OAD GAME                 \n"
         << "                 ..........                 \n"
         << "                [E]XIT GAME                 \n"
         << "                 ..........                 \n"
         << "============================================\n";
}

// ----------------------- CHOICES -----------------------------

void newGame(){

    cout << "Starting a new game...";

}

void loadGame(){

    cout << "Loading existing game...";
}

void exitGame(){

    cout << "Exiting game....";
}


int main () {

    char key;

    do{
        key = getchar();
        key = toupper(key);

    } while (key != 'N' && key != 'L' && key != 'E');
    

    showMainMenu();
    switch(key){

        case 'N':
            newGame();
            break;
        case 'L':
            loadGame();
            break;
        case 'E':
            exitGame();
            break;
        default:
            break;



    }

    return 0;
}

