//reverse
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    // Calculate sum
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Calculate average
    double average = (double)sum / n;

    cout << "Average: " << average << endl;

}


