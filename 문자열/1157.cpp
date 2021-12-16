#include<iostream>
using namespace std;

int main(){
    int check[26], maxIdx=0;
    for(int i=0; i<26; i++) check[i]=0;
    string word;
    cin >> word;
    for(int i=0; i<word.length(); i++){
        word[i]=tolower(word[i]);
        check[word[i]-'a']++;
    }
    int max = check[0];
    for(int i=1; i<26; i++){
        if(max<check[i]){
            maxIdx=i; max=check[i];
        }
    }
    for(int i=0; i<26; i++){
        if(max == check[i] && maxIdx != i){
            cout << '?';
            return 0;
        }
    }
    cout << (char)(maxIdx + 'A') << endl;
}