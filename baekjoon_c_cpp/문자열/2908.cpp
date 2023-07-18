#include<iostream>
using namespace std;

string flip(string str){
    for(int i=0; i<str.length()/2; i++){
        char tmp = str[i];
        str[i] = str[str.length()-i-1];
        str[str.length()-i-1] = tmp;
    }
    return str;
}

int main(){
    string a, b;
    cin >> a >> b;
    int na = stoi(flip(a)), nb = stoi(flip(b));
    if(na > nb) cout << na;
    else cout << nb;
}