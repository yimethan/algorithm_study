#include <iostream>
using namespace std;

int min(int a, int b) {
	int m = (a < b) ? a : b;
	return m;
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << min(a, b) << endl;
}