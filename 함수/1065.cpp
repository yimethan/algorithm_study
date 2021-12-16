#include<iostream>
using namespace std;

bool han(int n){
    string num = to_string(n);
    int d = num[1] - num[0];
    for(int i=2; i<num.length(); i++){
        if(num[i]-num[i-1] != d) return false; 
    }
    return true;
}

int main(){
    int num, count=0;
    cin >> num;
    for(int i=1; i<=num; i++)
        if(han(i)) count++;
    cout << count << endl;
}