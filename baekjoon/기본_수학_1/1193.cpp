#include<iostream>
using namespace std;

int main(){
    int x, i=1;
    cin >> x;

    while (x > i){
        x -= i;
        i++;
    }

    if(i % 2 == 0) cout << x << '/' << i + 1 - x << endl;
    else cout << i + 1 - x << '/' << x << endl;
}