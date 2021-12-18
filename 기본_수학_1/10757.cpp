#include<iostream>
using namespace std;

int main(){
    string a, b, res;
    cin >> a >> b;
    int carry=0, alen = a.length(), blen = b.length();

    while(alen || blen || carry){
        int aval=0, bval=0;
        if(alen) aval = a[--alen] - '0';
        if(blen) bval = b[--blen] - '0';

        res += (char)((aval + bval + carry) % 10 + '0');
        carry = (aval + bval + carry) / 10;
    }
    for(int i=res.length()-1; i>=0; i--) cout << res[i];
}