#include<iostream>
using namespace std;

int main(){
    int test, apt[15][15]={0,};
    cin >> test;

    for(int i=0; i<15; i++) apt[0][i]=i;
    for(int i=1; i<15; i++){
        for(int j=1; j<15; j++) apt[i][j] = apt[i-1][j] + apt[i][j-1];
    }

    while(test--){
        int k, n;
        cin >> k >> n;
        
        cout << apt[k][n] << endl;
    }
}