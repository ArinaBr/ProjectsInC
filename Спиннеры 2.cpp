#include <iostream>
using namespace std;

int main()
{
    int m, w, n3, n4, l;
    cout << "Enter m" << endl;
    cin >> m;
    w = 2 * pow(10, 9);
    l = m / 3;
    if (m <= 0 || m > w) {
        cout << "Error" << endl;
    }
    else {
        if (m == 1 || m == 2 || m == 5) {
            cout << "n3 = " << 0 << " " << "n4 = " << 0 << endl;
        }
        else {
            for (int i = 1; i <= l; i++) {
                if (((m - 3 * i) % 4) == 0) {
                    n3 = i;
                    n4 = (m - 3 * i) / 4;
                }
            }
            cout << "n3 = " << n3 << " " << "n4 = " << n4 << endl;
        }
    }
}
