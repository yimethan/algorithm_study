#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, count = 0;
	cin >> n;
	
	int *ram = new int[n];
    vector<int> flag;
	
	for(int i=0; i<n; i++) {
		cin >> ram[i];
		if((ram[i] & (ram[i] - 1)) != 0) {
			count++;
			flag.push_back(i + 1);
		}
	}
	
	cout << count << endl;
    for(int i=0; i<flag.size(); i++) cout << flag[i] << ' ';
}