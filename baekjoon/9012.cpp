#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string str;
        cin >> str;
        int acc = 0, f = 0;
        for(int i=0; i<str.length(); i++) {
            if(str[i] == '(') {
                acc++;
            }
            else if(str[i] == ')') {
                if(acc == 0) {
                    f = 1;
                    break;
                }
                acc--;
            }
        }
        if(f == 0 && acc == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}