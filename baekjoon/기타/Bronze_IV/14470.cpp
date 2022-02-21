#include<iostream>
using namespace std;

int main() {
    int a, b, c, d, e, time;
    cin >> a >> b >> c >> d >> e;
    if(a < 0) time = (a * -1) * c + d + b * e;
    else if(a == 0) time = d + b * e;
    else time = (b - a) * e;
    cout << time << endl;
}