#include<iostream>
#include<string>
using namespace std;

string s;

int countChange(char letter) {
    bool isLetter = true;
    int changeCount = 0;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == letter) {
            isLetter = true;
        } else {
            if(isLetter == true) {
                changeCount++;
            }
            isLetter = false;
        }
    }
    return changeCount;
}

int main() {
    cin >> s;
    int zeroCount = countChange('0');
    int oneCount = countChange('1');
    cout << ((zeroCount > oneCount) ? oneCount : zeroCount) << endl;
}