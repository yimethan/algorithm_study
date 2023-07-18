#include<iostream>
using namespace std;
bool visited[10]={false,};
int num[10]={0,};
int n, m;

void DFS(int a, int x){
    if(a == m){
        for(int i=0; i<m; i++) cout << num[i] << ' ';
        cout << '\n';
    }
    else{
        for(int i=x; i<=n; i++){
            if(!visited[i]){
                visited[i] = true;
                num[a] = i;
                DFS(a + 1, i + 1);
                visited[i] = false;
            }
        }
    }
}

int main(){
    cin >> n >> m;

    DFS(0, 1);
}