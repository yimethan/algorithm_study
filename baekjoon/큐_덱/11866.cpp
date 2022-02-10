#include<iostream>
#include<queue>
using namespace std;

queue<int> Q;

int main() {
    int a, b;
    cin >> a >> b;
    for(int i=1; i<=a; i++) Q.push(i);
    cout << '<'; 
    while(!Q.empty()) {
        for(int i=0; i<b-1; i++) {
            Q.push(Q.front());
            Q.pop();
        }
        cout << Q.front();
        Q.pop();
        if(!Q.empty()) cout << ", ";
    }
    cout << '>' << endl;
}