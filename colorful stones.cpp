#include <iostream>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;  // Read input strings

    int position = 0;  // Liss starts at index 0 (1-based index is position+1)

    for (char instruction : t) {
        if (s[position] == instruction) {
            position++;  // Move forward if colors match
        }
    }

    cout << position + 1 << endl;  // Convert to 1-based index and print result
    return 0;
}
