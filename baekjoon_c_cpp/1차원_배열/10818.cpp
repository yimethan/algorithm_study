#include<iostream>
using namespace std;

int main(){
    int test, max = 0, min = 100000, n;
    cin >> test;
    for(int i=0; i<test; i++){
        cin >> n;
        if(n>max) max=n;
        if(n<min) min=n;
    }
    cout << min << ' ' << max << endl;
}