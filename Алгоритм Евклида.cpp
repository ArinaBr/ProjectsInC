#include <iostream>
using namespace std;

int main()
{
    int a, b, x, a0, b0;
    cout << "Enter a, b" << endl;
    cin >> a >> b;
    a0 = a;
    b0 = b;
    while (a != 0 && b != 0) {
        if (a > b) {
            a = a % b;
        }
        else {
            b = b % a;
        }
        x = a + b;
    }
    cout << "NOD (division) = " << x << endl;
    while (a0 != b0) {
        if (a0 > b0) {
            a0 = a0 - b0;
        }
        else {
            b0 = b0 - a0;
        }
    }
    cout << "NOD (subtraction) = " << a0 << endl;
}
