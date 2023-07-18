#include<iostream>
using namespace std;

int main(){
    string str;
    int test, n;
    cin >> test;
    for(int i=0; i<test; i++){
        cin >> n >> str;
        for(int j=0; j<str.length(); j++){
            for(int k=0; k<n; k++) cout<<str[j];
        }
        cout<<endl;
    }
}