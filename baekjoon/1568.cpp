#include<iostream>
using namespace std;

int main() {
    int n, time = 1, i = 0;
    cin >> n;
    while(true) {
        n -= time;
        if(n < 0) break;
        time++;
        i++;
        if(n < time) time = 1;
    }
    cout << i << endl;
}