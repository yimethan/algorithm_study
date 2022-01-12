#include <iostream>
using namespace std;

bool isMirror() {
	string s;
	cin >> s;    
	int len = s.length();
    int mid = len / 2;
	for(int i=0; i < mid; i++) {
		if(s[i] == 'b') {
            if(s[len-i-1] != 'd') return false;
        }
        else if(s[i] == 'd') {
            if(s[len-i-1] != 'b') return false;
        }
        else if(s[i] == 'i') {
            if(s[len-i-1] != 'i') return false;
        }
        else if(s[i] == 'l') {
            if(s[len-i-1] != 'l') return false;
        }
        else if(s[i] == 'm') {
            if(s[len-i-1] != 'm') return false;
        }
        else if(s[i] == 'n') {
            if(s[len-i-1] != 'n') return false;
        }
        else if(s[i] == 'o') {
            if(s[len-i-1] != 'o') return false;
        }
        else if(s[i] == 'p') {
            if(s[len-i-1] != 'q') return false;
        }
        else if(s[i] == 'q') {
            if(s[len-i-1] != 'p') return false;
        }
        else if(s[i] == 's') {
            if(s[len-i-1] != 'z') return false;
        }
        else if(s[i] == 'z') {
            if(s[len-i-1] != 's') return false;
        }
        else if(s[i] == 'u') {
            if(s[len-i-1] != 'u') return false;
        }
        else if(s[i] == 'v') {
            if(s[len-i-1] != 'v') return false;
        }
        else if(s[i] == 'w') {
            if(s[len-i-1] != 'w') return false;
        }
        else if(s[i] == 'x') {
            if(s[len-i-1] != 'x') return false;
        }
        else return false;
	}
    if(len % 2 == 1) {
        if(s[mid] == 'i' || s[mid] == 'l' || s[mid] == 'm' || s[mid] == 'n' || s[mid] == 'o' ||
         s[mid] == 'u' || s[mid] == 'v' || s[mid] == 'w' || s[mid] == 'x') return true;
        else return false;
    }
	return true;
}

int main() {
	int n;
	cin >> n;
	
	while(n--) {
		if(isMirror()) cout << "Mirror" << endl;
		else cout << "Normal" << endl;
	}
}