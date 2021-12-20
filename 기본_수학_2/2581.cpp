#include<iostream>
using namespace std;

int main(){
    int min, max, minimum=100;
    int idx=0, sum=0, j;
    cin >> min >> max;
    for(int i = min; i <= max; i++){
        if(i != 1) {
            for(j = 2; j*j <= i; j++) if(i % j == 0) break;
            if(j*j > i){
                sum += i;
                if(sum == i) minimum = i;
            }
        }
    }
    if(!sum) cout << -1 << endl;
    else cout << sum << endl << minimum << endl;   
}