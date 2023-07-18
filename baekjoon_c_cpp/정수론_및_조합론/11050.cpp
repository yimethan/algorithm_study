#include<iostream>
using namespace std;

int cal(int n, int k) {
    int res = 1;
    for(int i=n; i>n-k; i--) res *= i;
    for(int i=1; i<=k; i++) res /= i;
    return res;
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << cal(n, k) << '\n';
}