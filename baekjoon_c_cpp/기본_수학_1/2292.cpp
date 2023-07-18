#include<iostream>
using namespace std;

int main(){
    int i=1, num, n=1;
    cin >> num;
    
    while(n < num){
        n += (i * 6);
        i++;
    }
    cout << i;
}