#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // Read the number of stones

    string s;
    cin >> s;  // Read the colors of the stones

    int count = 0;  // Count of stones to remove

    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {  
            count++;  // If two consecutive stones are the same, remove one
        }
    }

    cout << count << endl;  // Print the number of stones to remove
    return 0;
}
