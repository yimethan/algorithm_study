#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	
	int count = 0;
	for(int i=0; i<s.length(); i++) {
        if((s[i] != ' ' && s[i+1] == ' ')
        || (s[i] != ' ' && s[i+1] == '\0')) count++;
	}
	cout << count << endl;
}