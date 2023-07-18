#include<iostream>
using namespace std;

int main(){
    int cycle = 0;
    int num;
    cin >> num;

    int n = num;

    while (true) {
        int a = n / 10, b = n % 10;
        n = b * 10 + (a + b) % 10;
        cycle++;
        if(n == num) break;
    }
    cout << cycle << endl;
}