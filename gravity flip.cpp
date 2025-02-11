#include <iostream>
#include <algorithm>  // For sort()
using namespace std;

int main() {
    int n;
    cin >> n;  // Read number of columns

    int cubes[n];  // Array to store the cube counts

    // Read the cube counts for each column
    for (int i = 0; i < n; i++) {
        cin >> cubes[i];
    }

    // Sort the array in ascending order
    sort(cubes, cubes + n);

    // Print the sorted cube counts
    for (int i = 0; i < n; i++) {
        cout << cubes[i] << " ";
    }

    cout << endl;  // Print newline for formatting
    return 0;
}
