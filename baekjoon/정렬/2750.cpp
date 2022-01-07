#include<iostream>
using namespace std;

int main(){
    int n, num[1000];
    cin >> n;

    for(int i=0; i<n; i++) cin >> num[i];

    for(int i=n-1; i>0; i--){
        for(int j=0; j<i; j++){
            if(num[j] > num[j+1]){
                int temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }

    for(int i=0; i<n; i++) cout << num[i] << endl;
}