#include<iostream>
using namespace std;

int main() {
    while(true) {
        int count = 1;
        int n;
        cin >> n;
        if(n == 0) break;
        while(n != 0) {
            int num = n % 10;
            if(num == 1) count += 2;
            else if(num == 0) count += 4;
            else count += 3;
            n /= 10;
            count++;
        }
        cout << count << endl;
    }
}