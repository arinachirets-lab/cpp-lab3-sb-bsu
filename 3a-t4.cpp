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

    do {
        cout << "Enter integer no. " << i << ": ";
        
        // Проверка корректного ввода
        while (!(cin >> number)) {
            cout << "Warning: Invalid input. Please enter an integer: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        
        sum_k += number;
        i++;
    } while (i <= k);

    cout << "The total sum of " << k << " integers is: " << sum_k;
    return 0;
}
