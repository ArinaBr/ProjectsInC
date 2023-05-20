#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("E:\\file.txt");
    int x;
    do {
        if (fin >> x) {
            cout << x << endl;
        }
        else {
            fin.clear();
            fin.ignore(1, ' ');
        }
    } while (!fin.eof());
    fin.close();
    return 0;
}
