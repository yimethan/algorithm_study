#include <iostream>
#include<string>
using namespace std;

bool isVowel(char c) {
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
    || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        return true;
    }
    return false;
}

int main() {
	int n, is = 0;
	cin >> n;
    cin.ignore();

	for(int i=0; i<n; i++) {
	    string s;
		getline(cin, s);
        is = 0;
        
		for(int i=0; i<s.length(); i++) {
			if(isVowel(s[i])) {
				cout << s[i];
				is = 1;
			}
		}
		if(!is) cout << "???";
		cout << endl;
	}
}