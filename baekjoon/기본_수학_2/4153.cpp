#include<iostream>
using namespace std;

int main(){
    while(true){
        int a, b, c;
        cin >> a >> b >> c;
        if(!a && !b && !c) return 0;
        if(a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b){
            cout << "right" << endl;
        } else {
            cout << "wrong" << endl;
        }
    }
}