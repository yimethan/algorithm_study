#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=n; i>=0; i--) {
        bool check = true;
        int num = i;
        while(num) {
        int temp = num % 10;
            if(!(temp == 4 || temp == 7)) {
                check = false;
                break;
            }
            num /= 10; 
        }
        if(check) {
            cout << i << '\n';
            return 0;
        }
    }
}