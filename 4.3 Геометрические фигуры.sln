#include <iostream>
using namespace std;

double rectangle(double a, double b)
{
	double s;
	s = a * b;
	return s;
}
double triangle(double a, double b, double c) {
	double s, p;
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	return s;
}
double circle(double r) {
	double s;
	s = 3.14 * r * r;
	return s;
}
int main() {
	string name;
	cout << "Enter name of the figure" << endl;
	cin >> name;
	if (name == "rectangle") {
		double a, b;
		cout << "Enter a, b" << endl;
		cin >> a >> b;
		if (a > 0 and b > 0) {
			rectangle(a, b);
			cout << rectangle(a, b);
		}
		else {
			cout << "Error" << endl;
		}
	}
	else if (name == "triangle") {
		double a, b, c;
		cout << "Enter a, b, c" << endl;
		cin >> a >> b >> c;
		if (a > 0 and b > 0 and c > 0) {
			triangle(a, b, c);
			cout << triangle(a, b, c);
		}
		else {
			cout << "Error" << endl;
		}
	}
	else if (name == "circle") {
		double r;
		cout << "Enter r" << endl;
		cin >> r;
		if (r > 0) {
			circle(r);
			cout << circle(r);
		}
		else {
			cout << "Error" << endl;
		}
	}
	else {
		cout << "Error" << endl;
	}
	return 0;
}
