#include <iostream>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r; // Read shovel price and extra coin

    int n = 1; // Start with buying 1 shovel
    while (true) {
        int total_cost = n * k;
        if (total_cost % 10 == 0 || total_cost % 10 == r) {
            cout << n << endl; // Found the minimum number of shovels
            break;
        }
        n++; // Try buying more shovels
    }

    return 0;
}
