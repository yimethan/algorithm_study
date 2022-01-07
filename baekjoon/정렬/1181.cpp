#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool compare(string a, string b){
    if(a.length() == b.length()) return (a < b);
    return (a.length() < b.length());
}

int main(){
    int n;
    cin >> n;
    vector<string> word;

    while(n--){
        string w;
        cin >> w;
        if(find(word.begin(), word.end(), w) == word.end()) word.push_back(w);
    }

    sort(word.begin(), word.end(), compare);

    for(int i=0; i<word.size(); i++) cout << word[i] << '\n';
}