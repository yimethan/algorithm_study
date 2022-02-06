#include<iostream>
#include<deque>
using namespace std;

deque<int> D;

int main() {
    string s;
    int n;
    cin >> n;
    while(n--) {
        cin >> s;
        if(s == "push_back") {
            int num;
            cin >> num;
            D.push_back(num);
        } else if(s == "push_front") {
            int num;
            cin >> num;
            D.push_front(num);
        } else if(s == "pop_front") {
            if(D.empty()) cout << -1 << endl;
            else {
                cout << D.front() << endl;
                D.pop_front();
            }
        } else if(s == "pop_back") {
            if(D.empty()) cout << -1 << endl;
            else {
                cout << D.back() << endl;
                D.pop_back();
            }
        } else if(s == "size") {
            cout << D.size() << endl;
        } else if(s == "empty") {
            if(D.empty()) cout << 1 << endl;
            else cout << 0 << endl;
        } else if(s == "front") {
            if(D.empty()) cout << -1 << endl;
            else cout << D.front() << endl;
        } else if(s == "back") {
            if(D.empty()) cout << -1 << endl;
            else cout << D.back() << endl;
        }
    }
}