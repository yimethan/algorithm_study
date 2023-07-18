#include<iostream>
using namespace std;

int main(){
    string word;
    cin >> word;

    int check[26];
    for(int i=0; i<26; i++) check[i] = -1;
    for(int i=0; i<word.length(); i++)
        if(check[word[i]-'a'] == -1) check[word[i]-'a'] = i;
    for(int i=0; i<26; i++) cout << check[i] << ' ';
}