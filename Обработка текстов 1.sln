#include <iostream>
using namespace std;

int main()
{
    char s[500];
    int i, y, m, c, l;
    cout << "Enter the text" << endl;
    cin.getline(s, 500);
    l = strlen(s);
    m = 0;
    y = 0;
    c = 0;
    for (i = 0; i < l; i++) {
        if (s[i] != ' ' && s[i] != '.' && s[i] != ',' && s[i] != '?' && s[i] != '!' && s[i] != ':' && s[i] != '-' && s[i] != ';' && s[i] != '...' && s[i] != '"' && s[i] != '(' && s[i] != ')') {
            c = c + 1;
        }
        else {
            if (c > m) {
                m = c;
                y = i - c;
            }
            c = 0;
        }
    }
    if (c > m) {
        m = c;
        y = i - c;
    }
    m = m + y;
    cout << "Word of maximum length:" << endl;
    for (i = y; i < m; i++) {
        cout << s[i];
    }
}
