#include<iostream>
using namespace std;

int main(){
    int count[10]={0,}, a, b, c;
    cin >> a >> b >> c;
    int mul = a * b * c;
    while(mul!=0){
        count[mul%10]++;
        mul /= 10;
    }
    for(int i=0; i<10; i++) cout << count[i] << endl;
}