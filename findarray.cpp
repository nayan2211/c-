#include <iostream>
using namespace std;

int main() {
    int arr[99];  
    int sum = 0;
    cout << "Enter 99 numbers (from 1 to 100 with one missing):\n";
    for(int i = 0; i < 99; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    int n = 100;
    int expectedSum = (n * (n + 1)) / 2;
    int missing = expectedSum - sum;
    cout << "Missing number is: " << missing << endl;
    return 0;
}