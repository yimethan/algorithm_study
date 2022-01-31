#include<iostream>
using namespace std;

int f[41] = {0, 1, 1};

void fib(int n) {
    if(n == 0) cout << 1 << ' ' << 0 << '\n';
    else if(n == 1) cout << 0 << ' ' << 1 << '\n';
    else cout << f[n-1] << ' ' << f[n] << '\n';
}

int main() {
    int t, n;
    cin >> t;
    for(int i=3; i<41; i++) f[i] = f[i-1] + f[i-2];
    while(t--) {
        cin >> n;
        fib(n);
    }
}