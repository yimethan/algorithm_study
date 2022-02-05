#include<iostream>
using namespace std;

int triangle[501][501]={0,};

int main() {
    int n;
    cin >> n;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            int num;
            cin >> num;
            triangle[i][j] = num;
        }
    }
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            if(triangle[i-1][j-1] > triangle[i-1][j]) triangle[i][j] += triangle[i-1][j-1];
            else triangle[i][j] += triangle[i-1][j];
        }
    }
    int max = 0;
    for(int i=1; i<=n; i++) {
        if(max < triangle[n][i]) max =triangle[n][i];
    }
    cout << max << '\n';
}