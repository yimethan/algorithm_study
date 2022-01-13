#include <iostream>
#include <string>
using namespace std;
int main() {
	int one = 0, bigI = 0, smallL = 0, orOp = 0;
	string s;
	getline(cin, s);
	
	for(int i=0; i<s.length(); i++) {
		if(s[i] == '1') one++;
		else if(s[i] == 'I') bigI++;
		else if(s[i] == 'l') smallL++;
		else if(s[i] == '|') orOp++;
	}
	
	cout << one << endl;
	cout << bigI << endl;
	cout << smallL << endl;
	cout << orOp << endl;
}