#include<iostream>
using namespace std;

int main() {
    int n, i = 3, count = 0;
    cin >> n;

    while(i < n) {
        int num = i;
        while(num != 0) {
            if((num % 10 >= 3) && (num % 10 % 3 == 0)) count++;
            num /= 10;
        }
        i++;
    }

    cout << count << endl;
}