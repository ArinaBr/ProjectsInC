#include <iostream>
using namespace std;

int main()
{
    double N, i;
    cout << "Enter N" << endl;
    cin >> N;
    if (N > 0) {
        for (i = 1; i <= 10; i++) {
            cout << N + i << endl;
        }
    }
    else if (N <= 0) {
        for (i = 0; i < 10; i++) {
            cout << 1 + i << endl;
        }
    }
    return 0;
}
