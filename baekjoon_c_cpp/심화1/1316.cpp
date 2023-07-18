#include<iostream>
using namespace std;

bool def(string word){
    int check[26]={0,};

    check[word[0]-'a'] = 1;
    for(int j=1; j<word.length(); j++){
        if(!check[word[j]-'a']) check[word[j]-'a']=1;
        else {
            if(word[j] != word[j-1]) return false;
        }
    }
    return true;
}

int main(){
    int test, count=0;
    cin>>test;

    for(int i=0; i<test; i++){
        string word;
        cin >> word;
        
        if(def(word)) count++;
    }
    cout << count << endl;
}