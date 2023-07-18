#include<iostream>
using namespace std;

int main(){
    string str;
    cin >> str;
    int count=0;

    for(int i=0; i<str.length(); i++){
        count++;
        if(str[i]=='=') {
            if(str[i-1]=='c' || str[i-1]=='s') count--;
            if(str[i-1]=='z'){
                if(str[i-2]!='d') count--;
                else count-=2;
            }
        }
        
        if(str[i]=='-')
            if(str[i-1]=='c' || str[i-1]=='d') count--;

        if(str[i]=='j')
            if(str[i-1]=='l' || str[i-1]=='n') count--;
    }
    cout << count << endl;
}