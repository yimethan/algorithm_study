#include<iostream>
using namespace std;

int main() {
    int rem[42] = {0,};
    for(int i=0; i<10; i++) {
        int num;
        cin >> num;
        rem[num % 42]++;
    }
    int count = 0;
    for(int i=0; i<42; i++) {
        if(rem[i] != 0) count++;
    }
    cout << count;
}