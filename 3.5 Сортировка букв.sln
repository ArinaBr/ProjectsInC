#include <iostream>
using namespace std;

int main()
{
    string alphabet;
    cout << "Enter 30 letters" << endl;
    cin >> alphabet;
    if (alphabet.length() != 30) {
        cout << "Error" << endl;
    }
    else {
        for (int i = 0; i < 29; i++)
        {
            for (int j = i; j < 29; j++)
            {
                if (alphabet[i] > alphabet[j + 1])
                {
                    swap(alphabet[i], alphabet[j + 1]);
                }
            }
        }
        cout << alphabet;
    }
}
