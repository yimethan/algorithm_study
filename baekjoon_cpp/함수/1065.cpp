#include<iostream>

int main() {
    int x, count = 0;
    scanf("%d", &x);
    if(x < 100) count = x;
    else count = 99;
    for(int i=101; i<=x; i++) {
        if(i == 1000) break;
        int a = i % 10;
        int b = i / 10 % 10;
        int c = i / 100 % 10;
        if((a - b) == (b - c)) count++;
    }

    printf("%d", count);
}