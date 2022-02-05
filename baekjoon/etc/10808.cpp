#include<iostream>
using namespace std;

int check[26] = {0,};

int main() {
    string s;
    cin >> s;
    for(int i=0; i<s.length(); i++) {
        check[s[i] - 'a']++;
    }
    for(int i=0; i<26; i++) {
        cout << check[i] << ' ';
    }
}