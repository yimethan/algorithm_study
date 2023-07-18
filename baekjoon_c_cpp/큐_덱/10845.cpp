#include<iostream>
#include<queue>
using namespace std;

queue<int> Q;

int main() {
    string s;
    int n;
    cin >> n;
    while(n--) {
        cin >> s;
        if(s == "push") {
            int num;
            cin >> num;
            Q.push(num);
        } else if(s == "front") {
            if(Q.empty()) cout << -1 << endl;
            else cout << Q.front() << endl;
        } else if(s == "back") {
            if(Q.empty()) cout << -1 << endl;
            else cout << Q.back() << endl;
        } else if(s == "empty") {
            if(Q.empty()) cout << 1 << endl;
            else cout << 0 << endl;
        } else if(s == "pop") {
            if(Q.empty()) cout << -1 << endl;
            else {
                cout << Q.front() << endl;
                Q.pop();
            }
        } else if(s == "size") {
            cout << Q.size() << endl;
        }
    }
}