#include<iostream>
using namespace std;

int main(){
    string num;
    int sum=0, n;
    cin >> n >> num;
    for(int i=0; i<n; i++) sum += num[i] - '0';
    cout << sum << endl;
}