#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // Read the number of magnets

    string prev, current;
    cin >> prev;  // Read the first magnet
    int groups = 1;  // At least one group exists

    for (int i = 1; i < n; i++) {
        cin >> current;  // Read the next magnet
        if (current != prev) {  
            groups++;  // A new group starts
        }
        prev = current;  // Update previous magnet
    }

    cout << groups << endl;  // Print the number of groups
    return 0;
}
