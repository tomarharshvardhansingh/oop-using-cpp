#include <iostream>
#include <string>
using namespace std;

class Game {
private:
    string playerName;
    int score;

public:
    Game(string name) {
        playerName = name;
        score = 0;
    }

    void startGame() {
        cout << "Welcome to the game, " << playerName << "!" << endl;
        cout << "Game started. Let's play!" << endl;
    }

    void action1() {
        score += 10;
        cout << playerName << " performed Action 1! +10 points." << endl;
    }

    void action2() {
        score += 20;
        cout << playerName << " performed Action 2! +20 points." << endl;
    }

    void action3() {
        score -= 5;
        cout << playerName << " performed Action 3! -5 points." << endl;
    }

    void displayScore() {
        cout << "Current score of " << playerName << ": " << score << endl;
    }

    void endGame() {
        cout << "Game over! Final score for " << playerName << ": " << score << endl;
    }
};

int main() {
    Game player1("Alice");

    player1.startGame();
    player1.action1();
    player1.action2();
    player1.action3();
    player1.displayScore();

    player1.endGame();

    return 0;
}
