#include <iostream>
using namespace std;

int main()
{
    string n;
    int a, b, s = 0;
    long int f = 0;
    int x, o;
begin:
    cout << "Enter a number" << endl;
    cin >> n;
    cout << "Enter old foundation" << endl;
    cin >> a;
    cout << "Enter new foundation" << endl;
    cin >> b;
    x = atof(n.c_str());
    for (int i = 0; i < n.length(); i++) {
        o = x % 10;
        x = x / 10;
        if (o >= a) {
            cout << "Error" << endl;
            return 0;
        }
    }
    if ((a > 16) || (b > 16)) {
        cout << "Error" << endl;
        goto begin;
    }
    int h[500];
    for (int i = 0; i < n.size(); i++) {
        int k = 0;
        k = n[i];
        if (k == 65)
            h[i] = 10;
        if (k == 66)
            h[i] = 11;
        if (k == 67)
            h[i] = 12;
        if (k == 68)
            h[i] = 13;
        if (k == 69)
            h[i] = 14;
        if (k == 70)
            h[i] = 15;
        if (k == 48)
            h[i] = 0;
        if (k == 49)
            h[i] = 1;
        if (k == 50)
            h[i] = 2;
        if (k == 51)
            h[i] = 3;
        if (k == 52)
            h[i] = 4;
        if (k == 53)
            h[i] = 5;
        if (k == 54)
            h[i] = 6;
        if (k == 55)
            h[i] = 7;
        if (k == 56)
            h[i] = 8;
        if (k == 57)
            h[i] = 9;
        if ((k < 48) || (k > 57) && (k < 65) || (k > 70)) {
            cout << "Error" << endl;
            goto begin;
        }
        s = n.size() - 1 - i;
        f = f + (h[i] * (pow(a, s)));
    }
    int d[500];
    int m = 499;
    while (1) {
        d[m] = f % b;
        m = m - 1;
        f = f / b;
        if (f < b) {
            d[m] = f;
            break;
        }
    }
    cout << "New number = ";
    for (int u = m; u < 500; u++) {
        if (d[u] < 10) {
            cout << d[u];
        }
        if (d[u] == 10)
            cout << "A";
        if (d[u] == 11)
            cout << "B";
        if (d[u] == 12)
            cout << "C";
        if (d[u] == 13)
            cout << "D";
        if (d[u] == 14)
            cout << "E";
        if (d[u] == 15)
            cout << "F";
    }
}
