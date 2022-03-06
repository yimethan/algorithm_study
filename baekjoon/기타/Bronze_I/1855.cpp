#include<iostream>
#include<string>
using namespace std;

int main() {
    char message[20][200];

    int k;
    string s;
    cin >> k >> s;
    for(int i=0; i<s.length()/k; i++) {
        if(i % 2 == 0) {
            for(int j=0; j<k; j++) message[i][j] = s[i * k + j];
        } else {
            int x = k - 1;
            for(int j=0; j<k; j++) {
                message[i][j] = s[i * k + x];
                x--;
            }
        }
    }
    for(int i=0; i<k; i++) {
        for(int j=0; j<s.length()/k; j++) cout << message[j][i];
    }
}