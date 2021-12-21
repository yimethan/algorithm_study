#include<iostream>
using namespace std;

int main(){
    int m, n;
    bool check[1000001]={false,};
    cin >> m >> n;

    check[0] = check[1] = true;

    for(int i=2; i<1000001/i; i++){
        if(check[i]) continue;
        for(int j=i*i; j<100001; j+=i)
            if(j % i == 0) check[j]=true;
    }

    for(int i=m; i<=n; i++)
        if(!check[i]) cout << i << endl;
}