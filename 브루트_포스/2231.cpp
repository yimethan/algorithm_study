#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    for(int i=1; i<n; i++){
        int sum = i, num = i;
        while(num != 0){
            sum += num % 10;
            num /= 10;
        }    
        if(sum == n) {
            cout << i << endl;
            return 0;
        }
    }

    cout << 0 << endl;
}