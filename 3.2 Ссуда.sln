#include <iostream>
using namespace std;

int main()
{
    double S, n, m, p, r, x;
    cout << "Enter S,m,n" << endl;
    cin >> S >> m >> n;
    if (n <= 0 || S <= 0 || m <= 0) {
        cout << "Error" << endl;
    }
    else {
        x = 0;
        for (p = 1; x < m; p++)
        {
            r = p / 100;
            x = ((S * r * (pow((1 + r), n))) / (12 * (pow((1 + r), n)) - 1));
            if (x > m) {
                cout << "p = " << p << "%" << endl;
            }
            else {
                cout << "Can not be more than 100% " << endl;
                return 0;
            }
        }
    }
    return 0;
}
