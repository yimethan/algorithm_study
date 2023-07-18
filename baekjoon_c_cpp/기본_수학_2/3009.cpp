#include<iostream>
using namespace std;

int main(){
    int x, y, a[3], b[3];
    for(int i=0; i<3; i++) cin >> a[i] >> b[i];

    x = a[0] ^ a[1] ^ a[2];
    y = b[0] ^ b[1] ^ b[2];
    // x = x1 ^ x2 ^ x3, y = y1 ^ y2 ^ y3
    // a^b^b = b^a^b = b^b^a = a (교환법칙 성립)

    cout << x << ' ' << y;
}