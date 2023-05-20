#include <iostream>
using namespace std;

int main()
{
    double x, a, w;
    cout << "Enter x, a" << endl;
    cin >> x >> a;
    if (abs(x) < 1) {
        if (x == 0) {
            cout << "Error" << endl;
        }
        else {
            cout << "w=" << a * log(abs(x)) << endl;
        }
    }
    if (abs(x) >= 1) {
        if (a - pow(x, 2) < 0) {
            cout << "Error" << endl;
        }
        else {
            cout << "w=" << sqrt(a - pow(x, 2)) << endl;
        }
    }
    return 0;
}
