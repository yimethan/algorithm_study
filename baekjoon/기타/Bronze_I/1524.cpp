#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> S, B;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        for(int i=0; i<n; i++) {
            int num;
            cin >> num;
            S.push_back(num);
        }
        for(int j=0; j<m; j++) {
            int num;
            cin >> num;
            B.push_back(num);
        }
        sort(S.begin(), S.end());
		sort(B.begin(), B.end());
        while(!S.empty() && !B.empty()) {
            if(S.front() >= B.front()) B.erase(B.begin());
            else S.erase(S.begin());
        }
        if(S.empty() && B.empty()) cout << 'C' << endl;
        else if(S.empty()) cout << 'B' << endl;
        else if(B.empty()) cout << 'S' << endl;
    }
}