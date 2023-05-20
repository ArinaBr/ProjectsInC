#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("E:\\file.txt");
    if (!fout.is_open()) {
        cout << "Error" << endl;
    }
    else {
        cout << "File is open" << endl;
        fout << "k l o p t 3 y 6 9 i 1 11 m a 5";
        }
    fout.close();
    char buff[50];
    ifstream fin;
    fin.open("E:\\file.txt");
    fin.getline(buff, 50);
    fin.close();
    cout << buff << endl;
}
