#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        int *S = new int[n];
        int *B = new int[m];
        for(int i=0; i<n; i++) cin >> S[i];
        for(int j=0; j<m; j++) cin >> B[j];
        sort(S, S+n);
		sort(B, B+m);
        int i = 0, j = 0;
        while(i<n && j<m) {
            if(S[i] < B[j]) i++;
            else j++;
        }
        if(i == n) cout << 'B' << endl;
        else if(j == m) cout << 'S' << endl;
    }
}