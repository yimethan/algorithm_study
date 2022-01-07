#include<iostream>
using namespace std;

int main() {
  unsigned long long n;
  cin >> n;
    
	unsigned long long sum = n * (n + 1) / 2 % 1000000007;
	

  cout << sum * sum % 1000000007 << endl;
}