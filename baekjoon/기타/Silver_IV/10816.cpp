#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    vector<int> V;
    V.resize(n);
    for(int i=0; i<n; i++) cin >> V[i];
    sort(V.begin(), V.end());
    cin >> m;
    vector<int> res;
    res.resize(m);
    for(int i=0; i<m; i++) {
        int key;
        cin >> key;
        res[i] = upper_bound(V.begin(), V.end(), key) - lower_bound(V.begin(), V.end(), key);
    }
    for(int i=0; i<m; i++) cout << res[i] << ' ';
}