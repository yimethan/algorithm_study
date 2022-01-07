#include<iostream>
//#include<cmath>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    bool *check = new bool[n+1];
    fill_n(check, n+1, false);

    check[0] = check[1] = true;
    // for(int i=2; i<1000001/i; i++){
    //     if(check[i]) continue;
    //     for(int j=i*i; j<100001; j+=i)
    //         if(j % i == 0) check[j]=true;
    // }
    for (int i=2; i<=n; i++)
            if(!check[i])
                for(int j=i*2; j<=n; j+=i) check[j] = true;

    for(int i=m; i<=n; i++)
        if(!check[i]) cout << i << endl;
}