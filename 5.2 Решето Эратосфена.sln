#include <iostream>
using namespace std;

int main()
{
    int N, i, j, p;
    cout << "Enter N" << endl;
    cin >> N;
    cout << "Prime numbers:" << endl;
    int *mas = new int[N + 1];   //Выделяется достаточно памяти для размещения данных
    for (i = 0; i <= N; i++) {
        mas[i] = i;
    }
    for (p = 2; p <= N; p++) {
        if (mas[p] != 0) {
            cout << mas[p] << endl;
            for (j = pow(p, 2); j <= N; j = j + p) {   //Удаляются числа кратные p: p2, p2+p, p2+2p и т. д.
                mas[j] = 0;
            }
        }
    }
    return 0;
}
