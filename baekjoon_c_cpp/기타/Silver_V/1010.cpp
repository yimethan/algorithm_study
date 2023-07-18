#include<iostream>
using namespace std;

int main() {
    int n, m, t;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &n, &m);
        long long int res = 1;
        int r;
        if(n > m - n) r = n;
        else r = m - n;
        for(int i=m; i>r; i--) res *= i;
        for(int i=m-r; i>1; i--) res /= i;
        printf("%d\n", res);
    }
}