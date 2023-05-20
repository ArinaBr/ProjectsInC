#include <iostream>
using namespace std;

int main()
{
    double max1, min1, max2, min2, sum1, sum2, sum3;
    int i, j, k, p1, p2, p3, p4;
    double A[3][4] = { {5, 2, 0, 10}, {3, 5, 2, 5}, {20, 0, 0, 0} };
    double B[4][2] = { {1.20, 0.50}, {2.80, 0.40}, {5.00, 1.00}, {2.00, 1.50} };
    double C[3][2] = { {0, 0}, {0, 0}, {0, 0} };
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 4; k++) {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    cout << "C =" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            cout << C[i][j] << '\t';
        }
        cout << endl;
    }
    p1 = p2 = p3 = p4 = max1 = max2 = sum1 = sum2 = sum3 = 0;
    min1 = min2 = C[0][0];
    for (i = 0; i < 3; i++) {
        if (C[i][0] >= max1) {
            max1 = C[i][0];
            p1 = i + 1;
        }
        if (C[i][0] <= min1) {
            min1 = C[i][0];
            p2 = i + 1;
        }
        if (C[i][1] >= max2) {
            max2 = C[i][1];
            p3 = i + 1;
        }
        if (C[i][1] <= min2) {
            min2 = C[i][1];
            p4 = i + 1;
        }
        sum1 = sum1 + C[i][0];
        sum2 = sum2 + C[i][1];
    }
    sum3 = sum1 + sum2;
    cout << "1) " << p1 << " - seller who made the most money; " << p2 << " - seller who made the least money" << endl;
    cout << "2) " << p3 << " - seller who received the most commission; " << p4 << " - seller who received the least commission" << endl;
    cout << "3) " << sum1 << " - total amount of money earned for the goods" << endl;
    cout << "4) " << sum2 << " - total commission amount" << endl;
    cout << "5) " << sum3 << " - total amount of money passed through the hands of sellers" << endl;
}
