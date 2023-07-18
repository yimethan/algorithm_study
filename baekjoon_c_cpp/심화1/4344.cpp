#include<iostream>
using namespace std;

int main(){
    int c, n;
    double score[1000];
    cin >> c;
    for(int i=0; i<c; i++){
        cin >> n;
        int sum=0, count=0;
        for(int j=0; j<n; j++){
            cin >> score[j];
            sum+=score[j];
        }
        double avg = sum / n;
        for(int j=0; j<n; j++) if(score[j]>avg) count++;
        printf("%.3f%%\n", (double)count/n*100);
    }
}