#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    string s;
    while(true) {
        cin >> s;
        if(s == "0") break;
        string original = s;
        reverse(s.begin(), s.end());
        if(s == original) cout << "yes\n";
        else cout << "no\n";
    }
}