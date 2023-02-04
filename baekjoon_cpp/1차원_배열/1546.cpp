#include<iostream>
using namespace std;

int main() {
    int n, num[1000];
    cin >> n;
    double sum = 0, max = 0;
    for(int i=0; i<n; i++) {
        cin >> num[i];
        if(max < num[i]) max = num[i];
    }
    for(int i=0; i<n; i++) {
        sum += num[i] / max * 100;
    }
    printf("%.2f", (sum/n));
}