#include<iostream>

int num[10001] = {0,};

int d(int n) {
    int res = n;
    while(n != 0) {
        res += n % 10;
        n /= 10;
    }
    return res;
}

int main() {
    for(int i=1; i<10001; i++) {
        int sum = d(i);
        if(sum <= 10000) {
            num[sum]++;
        }
    }
    for(int i=1; i<10001; i++) {
        if(num[i]==0) printf("%d\n", i);
    }
}