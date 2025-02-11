#include <iostream>
using namespace std;

int main() {
    int a[4];  // Array to store calories for each strip
    for (int i = 0; i < 4; i++) {
        cin >> a[i];  // Read calorie values
    }

    string s;
    cin >> s;  // Read the sequence of touches

    int totalCalories = 0;

    // Loop through each character in the string
    for (char c : s) {
        int index = c - '1';  // Convert '1'-'4' to array index (0-3)
        totalCalories += a[index];  // Add corresponding calories
    }

    cout << totalCalories << endl;  // Output total calories spent
    return 0;
}
