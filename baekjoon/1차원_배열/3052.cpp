#include<iostream>
using namespace std;

int main(){
    int rem[42]={0,}, num, count=0;
    for(int i=0; i<10; i++){
        cin >> num;
        rem[num%42]++;
    }
    for(int i=0; i<42; i++) if(rem[i]) count++;
    cout << count << endl;
}