#include <iostream>
using namespace std;

int PairsCount(int arr[], int sum)
{
    int count = 0; //все возможные пары и их суммы
    for (int i = 0; i < 15; i++)
        for (int j = i + 1; j < 15; j++)
            if (arr[i] + arr[j] == sum)
                count = count + 1;
    return count;
}
int main()
{
    int arr[15];
    int w = 0;
    cout << "Enter 15 numbers" << endl;
    while (w <= 14) {
        cin >> arr[w];
        w = w + 1;
    }
    int sum = 13;
    cout << "Number of pairs is "
        << PairsCount(arr, sum);
    return 0;
}
