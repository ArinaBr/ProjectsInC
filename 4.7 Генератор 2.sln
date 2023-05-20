#include <iostream>
using namespace std;

int main()
{
    int s[13850];
    int m = 25173, c = 65537;
    s[0] = 0;
    cout << s[0] << endl;
    for (int i = 1; i <= 13849; i++) {
        s[i] = ((m * s[i - 1] + i) % c);
        cout << s[i] << endl;
    }
}
