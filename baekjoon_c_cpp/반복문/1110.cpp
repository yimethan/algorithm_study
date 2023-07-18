#include<iostream>
using namespace std;

int main() {
    int n, cycle = 1;
    cin >> n;

    int num = (n % 10 * 10) + (((n / 10) + (n % 10)) % 10);
    while(n != num) {
        num = (num % 10 * 10) + (((num / 10) + (num % 10)) % 10);
        cycle++;
    }
    cout << cycle;
}