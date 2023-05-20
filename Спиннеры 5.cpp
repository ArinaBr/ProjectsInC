#include <iostream>
using namespace std;

int main()
{
    int n, k, left, right, i1 = 0, i2 = 0, sum = 0, max = 0;
    long long w = 1 * pow(10, 18);
    cout << "Enter n, k" << endl;
    cin >> n >> k;
    if (k < 1 || n < 1 || k > w || n > w || n < k) {
        cout << "Error" << endl;
    }
    else {
        int* a = new int[n + 2];
        a[0] = 8; a[n + 1] = 8; 
        for (int i = 1; i <= n; i++)
            a[i] = 0;
        while (k > 0)
        {
            for (int y = 0; y <= n + 1; y++)
            {
                if (a[y] == 0)
                    sum = sum + 1;
                else
                {
                    if (sum > max)
                    {
                        i1 = y - 1 - sum;
                        i2 = y;
                        max = sum;
                    }
                    sum = 0;
                }
            }
            a[(i1 + i2) / 2] = 2;
            sum = 0;
            max = 0;
            k = k - 1;
        }
        left = (i1 + i2) / 2 - (i1 + 1);
        right = (i2 - 1) - (i1 + i2) / 2;
        cout << "Left: " << left << " Right: " << right << endl;
    }
}
