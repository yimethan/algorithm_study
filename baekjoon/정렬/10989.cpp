#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n, a[10001]={0,};
    cin >> n;

    for(int i=0; i<n; i++) {
        int num;
        cin >> num;
        a[num]++;
    }

    for(int i=1; i<10001; i++) {
        for(int j=0; j<a[i]; j++) cout << i << '\n';
    }
}