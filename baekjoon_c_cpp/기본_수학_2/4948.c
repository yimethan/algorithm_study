#include <stdio.h>

int main() {
    int count, n, i, j, check[1000000]={0,};
    
    check[0]=check[1]=1;
    for(i=2; i<1000001/i; i++) {
        if(check[i]==1) continue;
        for(j=i*i; j<1000001; j+=i) if(j%i==0) check[j]=1;
    }
    scanf("%d", &n);
    while(n){
        count=0;
        for(i=n+1; i<=n*2; i++) if(!check[i]) count++;
        printf("%d\n", count);
        scanf("%d", &n);
    }
    return 0;
}