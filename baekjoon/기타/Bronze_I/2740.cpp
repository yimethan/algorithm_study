#include<iostream>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m;
    int A[100][100], B[100][100], C[100][100];
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) cin >> A[i][j];
    }
    cin >> m >> k;
    for(int i=0; i<m; i++) {
        for(int j=0; j<k; j++) cin >> B[i][j];
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<k; j++) {
            int sum = 0;
            for(int p=0; p<m; p++) sum += A[i][p] * B[p][j];
            C[i][j] = sum;
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<k; j++) cout << C[i][j] << ' ';
        cout << endl;
    }
}