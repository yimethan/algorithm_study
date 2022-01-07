#include<iostream>
using namespace std;

bool isPrime(int n){
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    int test, idx=0;
    cin >> test;

    while(test--){
        int n, maxIdx=0;
        cin >> n;

        for(int i=3; i<=n/2; i++){
            if(isPrime(i) && isPrime(n - i)){
                if(i > maxIdx) maxIdx = i;
            }
        }
        cout << maxIdx << ' ' << n - maxIdx << endl;
    }
}