#include<iostream>
#include<algorithm>
using namespace std;

int A[100000];

int main() {
    int n, m;
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &A[i]);
    sort(A, &A[n]);
    scanf("%d", &m);
    for(int i=0; i<m; i++) {
        int num;
        scanf("%d", &num);
        if(binary_search(A, &A[n], num)) printf("1\n");
        else printf("0\n");
    }
}