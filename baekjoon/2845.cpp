#include<iostream>
using namespace std;

int main() {
    int l, p;
    cin >> l >> p;
    int news[5], num = l * p;
    for(int i=0; i<5; i++) {
        cin >> news[i];
        cout << (news[i] - num) << ' ';
    }
}