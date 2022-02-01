#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int t, count = 0, time = 0;
    scanf("%d", &t);
    vector<pair<int, int>> V(t);
    for(int i=0; i<t; i++) scanf("%d %d", &V[i].second, &V[i].first);
    sort(V.begin(), V.end());
    for(int i=0; i<V.size(); i++) {
        if(time <= V[i].second) {
            count++;
            time = V[i].first;
        }
    }
    printf("%d", count);
}