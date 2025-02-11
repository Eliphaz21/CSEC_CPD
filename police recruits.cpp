#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // Read number of events

    int police = 0, untreatedCrimes = 0;

    for (int i = 0; i < n; i++) {
        int event;
        cin >> event;  // Read the event

        if (event > 0) {
            police += event;  // Recruit police officers
        } else {  // A crime occurs (-1)
            if (police > 0) {
                police--;  // Assign an officer to the crime
            } else {
                untreatedCrimes++;  // No officer available, crime goes untreated
            }
        }
    }

    cout << untreatedCrimes << endl;  // Output the number of untreated crimes
    return 0;
}
