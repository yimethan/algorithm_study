#include<iostream>
using namespace std;

int main() {
    int n, k, count = 0;
    scanf("%d %d", &n, &k);
    int *coins = new int[n];
    for(int i=0; i<n; i++) scanf("%d", &coins[i]);
    while(k != 0) {
        for(int i=n-1; i>=0; i--) {
            if(k >= coins[i]) {
                k -= coins[i];
                count++;
                break;
            }
        }
    }
    printf("%d", count);
    delete [] coins;
}