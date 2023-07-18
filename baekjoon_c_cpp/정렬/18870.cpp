#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b){
    return a < b;
}

int main(){
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i=0; i<n; i++) cin >> v[i];

    vector<int> c(v);
    sort(c.begin(), c.end());
    c.erase(unique(c.begin(), c.end()), c.end());
    // unique : 중복 지우고 중복 안 되는 값으로 앞부터 채움, 비는 공간은 원래 값 유지
    // 원본 유지되는 공간의 첫 주소 반환
    // erase(unique()) : 중복 안 되는 값만 남음

    for(int i=0; i<n; i++){
        auto it = lower_bound(c.begin(), c.end(), v[i]);
        cout << it - c.begin() << ' ';
    }
}