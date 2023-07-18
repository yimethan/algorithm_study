#include<iostream>
using namespace std;

int main() {
    int t, min = 1000000, max = 0;
    cin >> t;
    int *num = new int[t];
    for(int i=0; i<t; i++) {
        cin >> num[i];
        if(min > num[i]) min = num[i];
        if(max < num[i]) max = num[i];
    }
    cout << (min * max) << endl;
}