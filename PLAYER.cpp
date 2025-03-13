#include <iostream> 

using namespace std;

struct player {
    string name;
    int score;
    int level;
};

void displayPlayer(const player& p) {
    cout << "Player name: " << p.name << endl;
    cout << "Player score: " << p.score << endl;
    cout << "Player level: " << p.level << endl;
}

int main() {
    player player1 = {"Ikusya", 50, 25};
    player player2 = {"Jemo", 40, 25};

    displayPlayer(player1);
    displayPlayer(player2);

    player player3;  

    cout << "Input player name: ";
    cin >> player3.name;

    cout << "Input player score: ";
    cin >> player3.score;

    cout << "Input level attained: ";
    cin >> player3.level;

    cout << "\nDisplaying new player details:\n";
    displayPlayer(player3);  

    return 0;
}
