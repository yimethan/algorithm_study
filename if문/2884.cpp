#include<iostream>
using namespace std;

int main(){
    int h, m;
    cin >> h >> m;
    
    if(m < 45) {
        m += 15;
        if(!h) h = 23;
        else h--;
    }
    else m -= 45;

    cout << h << ' ' << m << endl;
}