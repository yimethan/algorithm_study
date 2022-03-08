#include<iostream>
using namespace std;

int main() {
    int coin[101][101];
    int n, m, count = 0;
    cin >> n >> m;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            scanf("%1d", &coin[i][j]);
        }
    }
    for(int i=n; i>=1; i--) {
        for(int j=m; j>=1; j--) {
            if(coin[i][j] == 1) {
                count++;
                for(int a=1; a<=i; a++) {
                    for(int b=1; b<=j; b++) {
                        if(coin[a][b] == 0) coin[a][b] = 1;
                        else coin[a][b] = 0;
                    }
                }
            }
        }
    }
    cout << count << endl;
}