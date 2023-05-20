#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n;
    if (n == 0) {
        cout << "Error" << endl;
    }
    else {
        float y = 0.0;
        float s = 0.0;
        int k;
        for (k = 1; k <= n; k++) {
            if (k % 2 == 0) {
                s = s - 1.0 / k;
            }
            else {
                s = s + 1.0 / k;
            }
            long long f = 1;
            int i;
            for (i = 2; i <= k; i++) {
                f = f * i;
            }
            y = y + f / s;
        }
        cout << "y = " << y << endl;
    }
}
