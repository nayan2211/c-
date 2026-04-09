#include <iostream>
using namespace std;

bool isPerfect(int num) {
    int sum = 0;
    for(int i = 1; i <= num / 2; i++) {
        if(num % i == 0) {
            sum += i;
        }
    }
    return (sum == num && num != 0);
}
int main() {
    int start, end;
    cout << "Enter starting range: ";
    cin >> start;
    cout << "Enter ending range: ";
    cin >> end;
    cout << "Perfect numbers between " << start << " and " << end << " are:\n";
    for(int i = start; i <= end; i++) {
        if(isPerfect(i)) {
            cout << i << " ";
        }
    }
    return 0;
}
