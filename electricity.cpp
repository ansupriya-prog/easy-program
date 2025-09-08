#include <iostream>
using namespace std;

int main() {
    float units, bill;

    cout << "Enter electricity units consumed: ";
    cin >> units;

    if (units <= 100) {
        bill = units * 3.0;
    } else if (units <= 200) {
        bill = (100 * 3.0) + (units - 100) * 4.5;
    } else if (units <= 300) {
        bill = (100 * 3.0) + (100 * 4.5) + (units - 200) * 6.0;
    } else {
        bill = (100 * 3.0) + (100 * 4.5) + (100 * 6.0) + (units - 300) * 7.5;
    }

    cout << "Total Electricity Bill = "<< bill << endl;

    return 0;
}
