#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    int num[10];
    while(t--) {
        for(int i=0; i<10; i++) cin >> num[i];
        sort(num, num+10);
        cout << num[7] << endl;
    }
}