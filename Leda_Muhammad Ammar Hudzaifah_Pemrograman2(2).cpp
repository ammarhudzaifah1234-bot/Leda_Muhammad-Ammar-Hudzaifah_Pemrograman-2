#include <iostream>
using namespace std;

int main() {
    int t;
    cout << "Detik Berapo Kau Nak?: ";
    cin >> t;

    int cycle = t % 103;

    if (cycle < 20) 
        cout << "Warno Ijo\n";
    else if (cycle < 23) 
        cout << "Warno Koneng\n";
    else 
        cout << "Warno Abang\n";

    return 0;
}
