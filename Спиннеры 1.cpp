#include <iostream>
using namespace std;

int main()
{
    int a, b, c, n, w;
    cout << "Enter a, b, c" << endl;
    cin >> a >> b >> c;
    w = 2 * pow(10, 9);
    if (a > c || a <= 0 || b <= 0 || c <= 0 || a > w || b > w || c > w) {
        cout << "Error" << endl;
    }
    else {
        n = (c - a) / b;
    }
    cout << "n = " << n << endl;
}
