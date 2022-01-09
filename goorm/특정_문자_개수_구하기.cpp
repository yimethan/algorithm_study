#include <iostream>
#include<string>
using namespace std;
int main() {
	string s;
	getline(cin, s);
	char c;
	cin >> c;
	int count = 0;
	for(int i=0; i<s.length(); i++) {
		if(s[i] == c) count++;
	}
	cout << count << endl;
}