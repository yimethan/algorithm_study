#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    double n, sum=0;
    int count[8001]={0,}, num, mode, cnt=0;
    vector<int> v;
    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> num;
        sum += num;
        v.push_back(num);
        count[num + 4000]++;
    }
    sort(v.begin(), v.end());

    if(n != 1){
        int res = *max_element(count, count+8000); // 최대 빈도수
        for (int i = 0; i < 8002; i++) {
            if (count[i] == res) cnt++; 
            if (cnt == 2) {
                mode = i - 4000;
                break;
            }
        }
    }
    else mode = v[0];

    cout << round((double)(sum / n)) << '\n';
    cout << v[n / 2] << '\n';
    cout << mode << '\n';
    cout << v.back() - v.front() << '\n';
}