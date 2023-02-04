#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long count = 0;
    for(int i=1; i<=n; i++) {
        count += pow(3, i);
    }
    cout << count;
}