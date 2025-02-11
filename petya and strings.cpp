#include <iostream>
#include <algorithm>  // For transform()
using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;  // Read two strings

    // Convert both strings to lowercase
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    // Compare lexicographically
    if (str1 < str2) {
        cout << "-1" << endl;
    } else if (str1 > str2) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }

    return 0;
}
