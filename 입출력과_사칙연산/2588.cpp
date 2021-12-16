#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int res = 0, sum = 0;

    for(int i=0; i<=2; i++){
        res = a * (b % 10);
        sum += res * pow(10, i);
        cout << res << endl;
        b /= 10;
    }

    cout << sum << endl;
}