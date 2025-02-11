#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int upper = 0, lower = 0;

    // Count uppercase and lowercase letters
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') 
            upper++;
        else 
            lower++;
    }

    // Convert to uppercase or lowercase
    if (upper > lower) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') 
                s[i] -= 32; // Convert to uppercase
        }
    } else {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') 
                s[i] += 32; // Convert to lowercase
        }
    }

    cout << s << endl;
    return 0;
}
