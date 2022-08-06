#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        int sum = 0;
        string s;
        cin >> s;
        int j = 0, count = 0;
        while(s[j] != '\0') {
            if(s[j] == 'O') {
                count++;
                sum += count;
            }
            else if(s[j] == 'X') {
                count = 0;
            }
            j++;
        }
        cout << sum << endl;
    }
}