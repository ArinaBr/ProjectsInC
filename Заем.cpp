#include <iostream>
using namespace std;

int main()
{
    double m, S, n, p, r;
    cout << "Enter S, p, n" << endl;
    cin >> S >> p >> n;
    if (n <= 0 || S <= 0 || p <= 0) {
        cout << "Error" << endl;
    }
    else {
        r = p / 100;
        if ((pow((1 + r), n) - 1) == 0) {
            cout << "Error" << endl;
        }
        else {
            cout << "m=" << (S * r * pow((1 + r), n)) / 12 / (pow((1 + r), n) - 1) << endl;
        }
    }
    return 0;
}
