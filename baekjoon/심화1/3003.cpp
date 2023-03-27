#include<iostream>
using namespace std;

int main() {
    int piece[6] = {1, 1, 2, 2, 2, 8};
    for(int i=0; i<6; i++) {
        int num;
        cin >> num;
        piece[i] -= num;
        cout << piece[i] << ' ';
    }
}