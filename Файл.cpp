#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    double a;
    ofstream fout;
    fout.open("E:\\file 1.txt");
    if (!fout.is_open()) {
        cout << "Error" << endl;
    }
    else {
        string numbers;
        cout << "Enter 10 numbers" << endl;
        cin >> numbers;
    }
            fout.close();
            char buff[100];
            ifstream fin;
            fin.open("E:\\file 1.txt");
            if (!fin.is_open()) {
                cout << "Error" << endl;
            }
            else {
                int sum = 0, n = 0;
                while (!fin.eof()) {
                    fin.getline(buff, 100);
                    n = atoi(buff);
                    sum += n;
                }
                fin.close();
                cout << "sum = " << sum << endl;
            }
}
