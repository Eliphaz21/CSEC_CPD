#include <iostream>
#include <set>
using namespace std;

int main() {
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4; // Read input

    set<int> uniqueColors = {s1, s2, s3, s4}; // Store unique colors

    int shoesToBuy = 4 - uniqueColors.size(); // Find how many he needs to buy
    cout << shoesToBuy << endl; // Output the result

    return 0;
}
