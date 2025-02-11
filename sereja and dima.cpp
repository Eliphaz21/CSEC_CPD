#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // Read the number of cards

    int cards[n];
    for (int i = 0; i < n; i++) {
        cin >> cards[i];  // Read the card values
    }

    int left = 0, right = n - 1;  // Two pointers (leftmost and rightmost)
    int sereja = 0, dima = 0;  // Scores of players
    bool serejaTurn = true;  // Sereja moves first

    while (left <= right) {
        // Choose the larger card (either leftmost or rightmost)
        if (cards[left] > cards[right]) {
            if (serejaTurn)
                sereja += cards[left];
            else
                dima += cards[left];
            left++;  // Move left pointer
        } else {
            if (serejaTurn)
                sereja += cards[right];
            else
                dima += cards[right];
            right--;  // Move right pointer
        }
        serejaTurn = !serejaTurn;  // Switch turns
    }

    cout << sereja << " " << dima << endl;  // Print final scores
    return 0;
}
