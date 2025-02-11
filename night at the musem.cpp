#include <iostream>
#include <cmath>  // For abs() function
using namespace std;

int main() {
    string s;
    cin >> s;  // Read the exhibit name

    int moves = 0;  
    char current = 'a';  // Start from 'a'

    // Loop through each character in the input string
    for (char target : s) {
        int clockwise = abs(target - current);  // Moving forward
        int counterclockwise = 26 - clockwise;  // Moving backward
        moves += min(clockwise, counterclockwise);  // Choose the minimum steps
        current = target;  // Update current position
    }

    cout << moves << endl;  // Print total moves
    return 0;
}
