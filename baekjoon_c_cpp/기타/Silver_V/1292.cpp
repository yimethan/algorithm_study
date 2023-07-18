#include<iostream>
using namespace std;

int main() {
    int sum = 0, a, b;
    cin >> a >> b;
    int num[5000], idx = 0, i = 1;
    while(idx < b) {
        for(int j=idx; j<idx+i; j++) num[j] = i;
        idx += i;
        i++;
    }
    for(int i=a-1; i<b; i++) sum += num[i];
    cout << sum << endl;
}