#include<iostream>
#include<vector>
using namespace std;

vector<string> V;

int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        string s;
        cin >> s;
        V.push_back(s);
    }
    for(int i=0; i<V[0].size(); i++) {
        bool isSame = true;
        for(int j=1; j<n; j++) {
            if(V[0][i] != V[j][i]) {
                isSame = false;
                break;
            }
        }
        if(isSame) cout << V[0][i];
        else cout << '?';
    }
}