#include <iostream>
using namespace std;

int main() {
    int n, originalNum, remainder, reversedNum = 0;

    cout << "Enter the number to be checked: ";
    cin >> n;

    originalNum = n;  // Store the original number

    while (n != 0) {
        remainder = n % 10;
        reversedNum = reversedNum * 10 + remainder;
        n = n / 10;
    }

    if (reversedNum == originalNum) {
        cout << "The entered number " << originalNum << " is a palindrome." << endl;
    } else {
        cout << "The number " << originalNum << " is not a palindrome." << endl;
    }

    return 0;
}
