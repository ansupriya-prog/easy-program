#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        cout << "It is an alphabet letter.";
    } else {
        cout << "It is NOT an alphabet letter.";
    }

    return 0;
}
