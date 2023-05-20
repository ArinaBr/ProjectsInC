#include <iostream>
using namespace std;

void rim() {
    string s;   //I=1; V=5; X=10; L=50; C=100; D=500; M=1000
    int a, j, x, k;   //I(73); V(86); X(88); L(76); C(67); D(68); M(77)
    x = 0;
    k = 0;
    cout << "Enter roman number" << endl;
    cin >> s;
    for (int i = s.size() - 1; i > -1; i--) {
        a = s[i];
        if ((a == 73) || (a == 86) || (a == 88) || (a == 76) || (a == 67) || (a == 68) || (a == 77)) {
            if (a == 73)
                j = 1;
            if (a == 86)
                j = 5;
            if (a == 88)
                j = 10;
            if (a == 76)
                j = 50;
            if (a == 67)
                j = 100;
            if (a == 68)
                j = 500;
            if (a == 77)
                j = 1000;
            if (j < k) {
                x = x - j;
            }
            else {
                x = x + j;
            }
            k = j;
        }
        else {
            cout << "Error" << endl;
            break;
        }
    }
    cout << x;
}
int main()
{
    rim();
}
