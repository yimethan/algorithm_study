#include<iostream>
using namespace std;

int GCD(int a, int b) {
    while(b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int LCM(int a, int b) {
    return a * (b / GCD(a, b));
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << GCD(a, b) << '\n' << LCM(a, b) << '\n';
}