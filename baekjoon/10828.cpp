#include<iostream>
using namespace std;

int pos = -1;
int stack[100];

void push() {
    int num;
    cin >> num;
    stack[++pos] = num;
}

void top() {
    if(pos == -1) cout << -1 << endl;
    else cout << stack[pos] << endl;
}

void size() {
    cout << (pos + 1) << endl;
}

void pop() {
    if(pos == -1) cout << -1 << endl;
    else cout << stack[pos--] << endl;
}

void empty() {
    if(pos == -1) cout << 1 << endl;
    else cout << 0 << endl;
}

int main() {
    int n;
    cin >> n;
    while(n--) {
        string cmd;
        cin >> cmd;
        if(cmd == "push") push();
        else if(cmd == "top") top();
        else if(cmd == "size") size();
        else if(cmd == "pop") pop();
        else if(cmd == "empty") empty();
    }
}