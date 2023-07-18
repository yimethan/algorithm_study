#include<iostream>
#include<string>
using namespace std;

int main() {
    string f, temp = "";
    cin >> f;
    bool minus = false;
    int sum = 0;
    for(int i=0; i<=f.size(); i++) {
        if(f[i] == '+' || f[i] == '-' || i == f.size()) {
            if(minus) sum -= stoi(temp);
            else sum += stoi(temp);

            if(f[i] == '-') minus = true;

            temp = "";
        }
        else temp += f[i];
    }
    cout << sum << '\n';
}