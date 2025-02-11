#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;  // Read the weights of Limak and Bob

    int years = 0;
    // Run the loop until Limak's weight is strictly greater than Bob's weight
    while (a <= b) {
        a *= 3;  // Limak's weight triples
        b *= 2;  // Bob's weight doubles
        years++;  // Increment the year counter
    }

    cout << years << endl;  // Output the number of years
    return 0;
}
