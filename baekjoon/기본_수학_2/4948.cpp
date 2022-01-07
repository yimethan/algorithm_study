#include<iostream>
using namespace std;

int main(){
    bool check[100001]={false,};

    // n보다 크고, 2n보다 작거나 같은 소수는 적어도 하나 존재한다
    check[0] = check[1] = true;

    for(int i=2; i<1000001/i; i++){
        if(check[i]) continue;
        for(int j=i*i; j<100001; j+=i)
            if(j % i == 0) check[j]=true;
    }

    int n;
    cin >> n;
    while(n){
        int count=0;
        for(int i=n+1; i<=n*2; i++){
            if(!check[i]) count++;
        }
        cout << count << endl;
        cin >> n;
    }
}