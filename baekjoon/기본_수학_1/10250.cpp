#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--) {
        int h, w, room, x;
        cin >> h >> w >> x;
        if(x % h == 0) room = h * 100 + x / h;
        else room = x % h * 100 + (x / h + 1);
        cout << room << endl;
    }
}