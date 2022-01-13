#include <iostream>
using namespace std;

int mul(int a, int b) {
	return a * b;
}

int main() {
	int a, b, c, d;
	
	cin >> a >> b >> c >> d;
	
	cout << mul(mul(a, b), mul(c, d));
}