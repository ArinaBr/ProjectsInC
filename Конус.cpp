#include <iostream>
#include<cmath>
#define PI 3.141592653589793
using namespace std;

int main()
{
    double v, s, h, R, r, l;
    cout << "Enter cone height, radius of the small base of the cone, radius of the large base of the cone" << endl;
    cin >> h >> r >> R;
    if (h < 0 || r < 0 || R < 0) {
        cout << "numbers must be greater then or equal to 0" << endl;
    }
    else if (h==0 && r==0 && R==0){
        cout << "the figure does not exist" << endl;
    }
    else if (h == 0) {
        cout << "this is a circle" << endl;
        cout << "v=0" << endl;
        cout << "s=" << PI * pow(R, 2) << endl;
    }
    else if (r == 0) {
        cout << "this is an ordinary cone" << endl;
        l = sqrt(pow(h, 2) + pow(R, 2));
        cout << "v=" << (PI * pow(R, 2) * h)/3 << endl;
        cout << "s=" << PI * R * (l+R) << endl;
    }
    else if (R == 0) {
        cout << "this is an inverted cone" << endl;
        l = sqrt(pow(h, 2) + pow(r, 2));
        cout << "v=" << (PI * pow(r, 2) * h)/3 << endl;
        cout << "s=" << PI * r * (l+r) << endl;
    }
    else if (r == 0 && R == 0) {
        cout << "this is a straight line" << endl;
        cout << "v=0" << endl;
        cout << "s=0" << endl;
    }
    else if (r == R) {
        cout << "this is a cylinder" << endl;
        cout << "v=" << PI * h * pow(R, 2) << endl;
        cout << "s=" << 2 * PI * R * (h + R) << endl;
    }
    else {
        cout << "this is a truncated cone" << endl;
        l= sqrt(pow(R - r, 2) + pow(h, 2));
        cout << "v=" << (h * PI * (pow(R, 2) + R * r + pow(r, 2)))/3 << endl;
        cout << "s=" << PI * (pow(R, 2) + (R + r) * l + pow(r, 2)) << endl;
    }
    
    return 0;
}
