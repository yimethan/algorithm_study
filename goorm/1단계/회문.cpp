#include<iostream>
using namespace std;

#define ISPAL 0
#define PSPAL 1
#define NOTPAL 2

bool isPal(string s) {
    int len = s.length();
    for(int i=0; i<=len/2; i++) {
        if(s[i] != s[len - i - 1]) return false;
    }
    return true;
}

bool fromLeft(string s) {
    bool flag = false;
    int p = 0, r = s.length() - 1;
    while(p <= r) {
        if(s[p] != s[r]) {
            if(flag == false) {
                flag = true;
                p++;
            }
            else {
                return false;
            }
        }
        else {
            p++; r--;
        }
    }
    return true;
}

bool fromRight(string s) {
    bool flag = false;
    int p = 0, r = s.length() - 1;
    while(p <= r) {
        if(s[p] != s[r]) {
            if(flag == false) {
                flag = true;
                r--;
            }
            else {
                return false;
            }
        }
        else {
            p++; r--;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        if(isPal(s)) cout << ISPAL << '\n';
        else if(fromLeft(s) || fromRight(s)) cout << PSPAL << '\n';
        else cout << NOTPAL << '\n';
    }
}