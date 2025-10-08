#include<iostream>
#include<limits>
using namespace std;

int main()
{
    int k, i = 1, sum_k = 0, number;
    cout << "Enter the amount of integers to sum = ";
    cin >> k;

    if (k <= 0) {
        cout << "No numbers to sum. Total sum is 0." << endl;
        return 0;
    }
