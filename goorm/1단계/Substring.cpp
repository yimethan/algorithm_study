#include <iostream>
#include <string>
using namespace std;
int main() {
	string s, sub;
	getline(cin, s);
	int a, b;
	cin >> a >> b;
	for(int i=a; i<a+b; i++) {
		sub += s[i-1];
	}
	cout << sub;
}