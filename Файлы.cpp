#include <iostream>
#include<fstream>
#include <vector>
#include <string>
#include <algorithm> 
using namespace std;

int main()
{
    ofstream fout;
    fout.open("E:\\file5.4.txt");
    if (!fout.is_open()) {
        cout << "Error" << endl;
    }
    else {
        cout << "Enter words. At the end enter ." << endl;
        vector <string> arr;
        string word;
        while (cin >> word) {
            if (word == ".") break;
            arr.push_back(word);
        }
        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << endl;
        }
        for (int r = 0; r < arr.size(); r++) {
            fout << arr[r] << endl;
        }
        cout << "Words are sorted" << endl;
    }
    fout.close();
    ofstream out("E:\\file5.4.txt", ios::app);
    cout << "Enter the last word" << endl;
    string h;
    cin >> h;
    out << h << endl;
    out.close();
    vector <string> ar;
    string e;
    ifstream fin("E:\\file5.4.txt");
    while (getline(fin, e)) {
        ar.push_back(e);
    }
    sort(ar.begin(), ar.end());
    for (int i = 0; i < ar.size(); i++) {
        cout << ar[i] << endl;
    }
    fin.close();
    ofstream ut("E:\\file5.4.txt");
    for (int r = 0; r < ar.size(); r++) {
        ut << ar[r] << endl;
    }
    cout << "New words are sorted" << endl;
    ut.close();
}
