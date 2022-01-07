#include<iostream>
using namespace std;

int main(){
    int num[9], idx=0, max = 0;
    for(int i=0; i<9; i++) {
        cin >> num[i];
        if(max<num[i]) {
            max=num[i];
            idx=i;
        }
    }
    cout << max << endl << idx+1;
}