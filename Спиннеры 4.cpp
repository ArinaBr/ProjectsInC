#include <iostream>
#include <vector>
using namespace std;

int s(int i)
{
    if (i <= 36) {
        return (i - 1) / 4;
    }
    else {
        return 8 - (i - 37) / 2;
    }
}
int main() {
    vector <int> arr(9, 0);
    int n, x, m;
    cout << "Enter n" << endl;
    cin >> n;
    if (n < 0 || n > 54) {
        cout << "Error" << endl;
    }
    else {
        if (n == 0) {
            cout << "Number of consecutive free compartments: 0" << endl;
        }
        else {
            cout << "Enter numbers of " << n << " free seat" << endl;
            for (int i = 0; i < n; i++) {
                cin >> x;
                arr[s(x)] = arr[s(x)] + 1;
            }
            m = x = 0;
            for (int i = 0; i < 9; i++) {
                if (arr[i] == 6) {
                    x = x + 1;
                    m = max(m, x);
                }
                else {
                    x = 0;
                }
            }
            cout << "Number of consecutive free compartments: " << m << endl;
        }
    }
}
