#include <stdio.h>

int main() {
    int m, n, i, j, check[1000001] = {0,};
    scanf("%d%d", &m, &n);
    
    check[0]=check[1]=1;
    for(i=2; i<1000001/i; i++) {
        if(check[i]==1) continue;
        for(j=i*i; j<1000001; j+=i) if(j%i==0) check[j]=1;
    }
    for(i=m; i<=n; i++) if(!check[i]) printf("%d\n", i);
    return 0;
}