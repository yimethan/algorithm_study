#include<iostream>
using namespace std;

int main(){
    int x, y, w, h, minDest=1000;
    cin >> x >> y >> w >> h;

    if(x > w/2){
        if(y > h/2){
            if(w - x > h - y) minDest = h - y;
            else minDest = w - x;
        } else {
            if(w - x > y) minDest = y;
            else minDest = w - x;
        }
    } else{
        if(y > h/2){
            if(x > h - y) minDest = h - y;
            else minDest = x;
        } else {
            if(x > y) minDest = y;
            else minDest = x;
        }
    }

    cout << minDest << endl;
}