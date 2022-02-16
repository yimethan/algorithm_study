#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<string> V;

int main() {
    string s;
    cin >> s;
    for(int i=0; i<s.length(); i++) {
        string temp = "";
        for(int j=i; j<s.length(); j++) temp += s[j];
        V.push_back(temp);
    }
    sort(V.begin(), V.end());
    for(int i=0; i<V.size(); i++) cout << V[i] << endl;
}