#include<iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    for(int i=b; i!=0; i/=10){
        int c = i % 10;
        cout << a * c << endl;
    }
    cout << a * b << endl;
}