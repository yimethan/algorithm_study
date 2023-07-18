#include<iostream>
using namespace std;

int main(){
    int test, count=0;
    cin >> test;

    while(test--){
        int num;
        cin >> num;
        if(num != 1) {
            for(int i=2; i<=num; i++) {
                if(i == num) count++;
                if(num % i == 0) break;
            }
        }
    }
    cout << count << endl;
}