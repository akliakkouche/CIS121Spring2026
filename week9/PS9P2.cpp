#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double computeBattingAverage(int hits, int atBats) {
    if (atBats == 0) {
        return 0.0;
    }
    return static_cast<double>(hits) / atBats;
}

int main() {
    string lastName;
    int hits, atBats;
    int playerCount = 0;

    cout << fixed << setprecision(3);
    cout << "Enter player's last name, hits, and at bats (Ctrl+Z to stop):" << endl;

    while (cin >> lastName >> hits >> atBats) {
        double battingAverage = computeBattingAverage(hits, atBats);

        cout << "Player: " << lastName
             << " | Batting Average: " << battingAverage << endl;

        playerCount++;
    }

    cout << "\nNumber of players entered: " << playerCount << endl;

    return 0;
}
