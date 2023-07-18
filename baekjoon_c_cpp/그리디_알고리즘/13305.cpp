#include<iostream>
using namespace std;

int main() {
    long long n, min = 10000, sum = 0;
    cin >> n;
    long long *dist = new long long[n-1];
    long long *price = new long long[n];
    for(int i=0; i<n-1; i++) cin >> dist[i];
    for(int i=0; i<n; i++) cin >> price[i];
    for(int i=0; i<n-1; i++) {
        if(price[i] < min) min = price[i];
        sum += min * dist[i];
    }
    cout << sum << '\n';
    delete [] dist;
    delete [] price;
}