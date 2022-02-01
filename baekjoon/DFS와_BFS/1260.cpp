#include <iostream>
#include <queue>
using namespace std;

#define MAX 1001
 
int n, m, v;
int graph[MAX][MAX];
int visited[MAX];
queue<int> Q;
 
void DFS(int v) {
    visited[v] = 1;
    cout << v << ' ';
    for (int i=1; i<=n; i++) {
        if (visited[i] == 0 && graph[v][i] == 1) {
            DFS(i);
        }
    }
}

void BFS(int v) {
    visited[v] = 1;
    Q.push(v);
    cout << v << ' ';
    while (!Q.empty()) {
        v = Q.front();
        Q.pop();
        for (int i=1; i<=n; i++) {
            if (visited[i] == 0 && graph[v][i] == 1) {
                Q.push(i);
                visited[i] = 1;
                cout << i << ' ';
            }
        }
    }
}
 
int main() {
    cin >> n >> m >> v;
    for (int i=0; i<m; i++) {
        int start, end;
        cin >> start >> end;
        graph[start][end] = 1;
        graph[end][start] = 1;
    }
    for(int i=1; i<=n; i++) visited[i] = 0;
    DFS(v);
    cout << '\n';
    for(int i=1; i<=n; i++) visited[i] = 0;
    BFS(v);
    return 0;
}