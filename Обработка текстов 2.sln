#include <iostream>
#include <vector>
using namespace std;

bool proverka(char symbol)
{
    if (symbol != '#')
        return true;
    else
        return false;
}
int main()
{
    vector <string> word;
    string a;
    string ch;
    int i, l, b;
    cout << "Enter letters" << endl;
    cin >> ch;
    l = ch.size();
    for (int y = 0; y < l; y++) {
        b = ch[y];
    }
    cout << "Enter the text. At the end enter #" << endl;
    while (cin >> a && proverka(a[a.size() - 1]) == true)
    {
        for (int e = 0; e < a.size(); e++) {
            if (a[e] == '.' || a[e] == ',') {
                a[e] = '\0';
            }
        }
        for (int r = 0; r < a.size(); r++) {
            if (a[r] == b)
                word.push_back(a);
       }
    }
    cout << "Words: ";
    for (i = 0; i < word.size(); i++)
    {
        cout << word[i] << " ";
    }
    cout << endl;
}
