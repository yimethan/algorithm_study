#include<iostream>
#include<queue>
using namespace std;

int n, m;
int cnt = 0;
int graph[101][101] = {0,};
bool visited[101] = {false,};
queue<int> Q;

void BFS(int s) {
    Q.push(s);
    visited[s] = true;
    while(!Q.empty()) {
        s = Q.front();
        Q.pop();
        for(int i=1; i<=n; i++) {
            if(visited[i] == false && graph[s][i] == 1) {
                Q.push(i);
                visited[i] = true;
                cnt++;
            }
        }
    }
}

int main() {
    cin >> n >> m;
    for(int i=0; i<m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a][b] = 1;
        graph[b][a] = 1;
    }
    
    BFS(1);
    cout << cnt << '\n';
}