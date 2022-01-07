#include<stdio.h>

int main() {
    int test, n, i, j, check[10001]={0,};
    
    for(j=2; j<10001/j; j++) {
        if(!check[j])  for(i=j*j; i<10001; i+=j) if(i%j==0) check[i] = 1;
    }
    
    scanf("%d", &test);
    while(test--) {
        scanf("%d", &n);
        for(i=n/2; i>1; i--)
            if(!check[i] && !check[n-i]) {
                printf("%d %d\n", i, n-i);
                break;
            }
    }
    return 0;
}