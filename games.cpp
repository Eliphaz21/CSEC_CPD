#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Read number of teams

    int home[n], guest[n]; // Arrays to store home and guest uniform colors

    // Read home and guest uniform colors for each team
    for (int i = 0; i < n; i++) {
        cin >> home[i] >> guest[i];
    }

    int count = 0; // Counter for games where home team wears guest uniform

    // Compare each team's home uniform with every other team's guest uniform
    for (int i = 0; i < n; i++) { // Home team
        for (int j = 0; j < n; j++) { // Guest team
            if (i != j && home[i] == guest[j]) {
                count++; // Home team needs to wear guest uniform
            }
        }
    }

    cout << count << endl; // Print the result
    return 0;
}
