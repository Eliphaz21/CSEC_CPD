#include <iostream>
#include <cmath>  // For abs()
using namespace std;

int main() {
    int matrix[5][5];
    int row, col;  // To store the position of '1'

    // Read the 5x5 matrix
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {  // Find the position of '1'
                row = i + 1;  // Convert 0-based index to 1-based
                col = j + 1;  // Convert 0-based index to 1-based
            }
        }
    }

    // Calculate the minimum moves to get (row, col) to (3,3)
    int moves = abs(row - 3) + abs(col - 3);
    
    cout << moves << endl;  // Output the result
    return 0;
}
