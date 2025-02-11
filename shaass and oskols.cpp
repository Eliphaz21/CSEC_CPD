#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // Number of wires
    
    int birds[n + 1];  // Array to store birds on each wire (1-based indexing)
    for (int i = 1; i <= n; i++) {
        cin >> birds[i];
    }

    int m;
    cin >> m;  // Number of shots
    
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;  // Wire number and bird position
        
        // Birds on the left jump to the upper wire (if exists)
        if (x > 1) {
            birds[x - 1] += (y - 1);
        }
        
        // Birds on the right jump to the lower wire (if exists)
        if (x < n) {
            birds[x + 1] += (birds[x] - y);
        }
        
        // Remove the shot bird
        birds[x] = 0;
    }

    // Output the final number of birds on each wire
    for (int i = 1; i <= n; i++) {
        cout << birds[i] << endl;
    }

    return 0;
}
