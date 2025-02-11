#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // Read number of problems

    int count = 0;  // Counter for solvable problems

    for (int i = 0; i < n; i++) {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;  // Read the three friends' confidence
        
        int sureCount = petya + vasya + tonya;  // Sum of confidence values

        if (sureCount >= 2) {  // At least two friends are sure
            count++;
        }
    }

    cout << count << endl;  // Print the number of problems they will solve
    return 0;
}
