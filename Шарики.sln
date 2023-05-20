#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	const int N = 10;
	int sh[N];
	bool da;
	int g = 1, m = 0;
	for (int k = 0; k < N; k++) {
		sh[k] = g;
		g++;
	}
	while (next_permutation(sh, sh + 10)) {
		for (int k = 0; k < N; k++) {
			if (sh[k] == k + 1) {
				da = true;
				break;
			}
		}
		if (da == true) {
			m++;
			da = false;
		}
	}
	cout << "Number of situations: " << m << endl;
}
