#include<iostream>
using namespace std;

int main(){
    int n, x[100]={0,}, y[100]={0,};
    cin >> n;

    for(int i=0; i<n; i++) cin >> x[i] >> y[i];
    for(int i=0; i<n; i++){
        int count = 1;
        for(int j=0; j<n; j++) if(x[i] < x[j] && y[i] < y[j]) count++;
        cout << count << endl;
    }
}