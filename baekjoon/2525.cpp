#include<iostream>
using namespace std;

int main() {
    int h1, m1, carry = 0;
    int min;
    cin >> h1 >> m1 >> min;
    int h2 = min / 60 + h1, m2 = min % 60 + m1;
    h2 += m2 / 60;
    m2 %= 60;
    h2 %= 24;
    cout << h2 << ' ' << m2 << endl;
}