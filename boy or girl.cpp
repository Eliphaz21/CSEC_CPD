#include <iostream>
using namespace std;

int main() {
    string username;
    cin >> username;  // Read the username

    bool seen[26] = {false};  // Array to track seen letters
    int uniqueCount = 0;  // Counter for distinct characters

    // Mark each character as seen
    for (int i = 0; i < username.length(); i++) {
        int index = username[i] - 'a';  // Convert letter to index (0-25)
        if (!seen[index]) {  // If it's the first time we see this letter
            seen[index] = true;
            uniqueCount++;
        }
    }

    // Check if the unique character count is even or odd
    if (uniqueCount % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
