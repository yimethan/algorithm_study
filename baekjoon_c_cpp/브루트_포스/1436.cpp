#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, num=665, count=0;
    cin >> n;

    while(true){
        if(n == count) break;
        num++;
        for(int i=0; i<10; i++){
            if((num / (int)pow(10, i) % 1000) == 666){
                count++;
                break;
            }
        }
    }

    cout << num;
}