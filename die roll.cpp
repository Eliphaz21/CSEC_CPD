#include <iostream>
using namespace std;

// Function to compute the Greatest Common Divisor (GCD)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int Y, W;
    cin >> Y >> W;  // Read the values of Y and W

    int maxValue = max(Y, W);  // The highest dice roll among Yakko and Wakko
    int favorableOutcomes = 6 - maxValue + 1;  // Rolls that make Dot win or tie
    int totalOutcomes = 6;  // Total possibilities (1 to 6)

    // Simplify the fraction using GCD
    int divisor = gcd(favorableOutcomes, totalOutcomes);
    cout << (favorableOutcomes / divisor) << "/" << (totalOutcomes / divisor) << endl;

    return 0;
}
