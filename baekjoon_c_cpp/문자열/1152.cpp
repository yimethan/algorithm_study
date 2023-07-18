#include<iostream>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    int count=1;
    for(int i=1; i<str.length(); i++){
        if(str[i]==' ') count++;
    }
    if(str[str.length()-1]==' ') count--;
    cout<< count << endl;
}