#include <bits/stdc++.h>
using namespace std;

int main() {
    double weight, height, bmi;
    cout << "Enter weight in kg: ";
    cin >> weight;
    cout << "Enter height in meters: ";
    cin >> height;
    bmi = weight / (height * height);
    cout << "Your BMI is: " << bmi << endl;
    //after conditions
    return 0;


}

