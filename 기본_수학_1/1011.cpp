#include<iostream>
using namespace std;

int main(){
    int test, x, y;
    cin >> test;
    while(test--){
        cin >> x >> y; // x는 항상 y보다 작은 값
        int dist = y - x, count = 1;
        while((dist -= count/2) > 0) count++;
        cout << count - 1 << endl;
    }
}