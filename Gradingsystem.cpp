#include <bits/stdc++.h>
using namespace std;


int main() {
    int score;

    cout << "Enter your score (0-100): ";
    cin >> score;
    if (score >= 90 && score <= 100) {
        cout<< 'A'<<endl;
    } else if (score >= 80 && score < 90) {
       cout<< 'B'<<endl;
    } else if (score >= 70 && score < 80) {
        cout<< 'C'<<endl;
    } else if (score >= 60 && score < 70) {
        cout<< 'D'<<endl;
    } else if (score >= 0 && score < 60) {
        cout<< 'F'<<endl;
    } else {
        cout << "Invalid score entered." << endl;
        return 1; 
    }
}

