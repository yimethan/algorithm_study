#include<iostream>
using namespace std;

int main(){
    int test;
    cin >> test;
    for(int i=0; i<test; i++){
        string quiz;
        cin >> quiz;

        int score=0, sq=0;
        for(int j=0; j<quiz.length(); j++){
            if(quiz[j] == 'O') {
                sq++;
                score += sq;
            }
            else {
                sq=0;
            }
        }
        cout << score << endl;
    }
}