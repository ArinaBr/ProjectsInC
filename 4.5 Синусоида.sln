#include <iostream>
using namespace std;

void f() {
    int x1 = 121;   //Размеры поля
    int y1 = 23;
    char coords[23][121];   //Массив, в котором хранится синус
    for (int i = 0; i < y1; i++)
        for (int j = 0; j < x1; j++)
            coords[i][j] = ' ';
    for (int x = 0; x < x1; x++) {
        double x2, y2;
        x2 = (double)x / 19.09859;   //Находим координату, от которой надо получить синус
        y2 = -9.51 * sin(x2) + 11.5;   //Получаем координату синуса и переводим в координаты массива
        coords[(int)y2][x] = '*';
    }
    for (int i = 0; i < y1; i++) {
        for (int j = 0; j < x1; j++)
            cout << coords[i][j];
        cout << endl;
    }
}
int main()
{
    f();   //Вызов функции прорисовки синуса
}
