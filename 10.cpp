/*
10. Execute the function for the given purpose.
Create a matrix and mention the elements in it.
Now, divide the main matrix into two halves in such
a way that the elements in index 0 are even, the elements in index 1 are odd, and so on.
Then arrange the values in ascending order for even and odd.
After this, calculate the sum of the second largest numbers from both even and odd matrices.
Example
The size of the array is 5.
Element at 0 index: 3
Element at 1 index: 4
Element at 2 index: 1
Element at 3 index: 7
Element at 4 index: 9
Even array: 1,3,9
Odd array: 4,7
*/

#include <iostream>
using namespace std;

void solve(int arr[], int n) {
    int evenArr[n], oddArr[n];
    int even = 0, odd = 0;

    // Divide the main array into even and odd arrays
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            evenArr[even++] = arr[i];
        } else {
            oddArr[odd++] = arr[i];
        }
    }

    // Sort the even array in ascending order using bubble sort
    for (int i = 0; i < even - 1; i++) {
        for (int j = 0; j < even - i - 1; j++) {
            if (evenArr[j] > evenArr[j + 1]) {
                int temp = evenArr[j];
                evenArr[j] = evenArr[j + 1];
                evenArr[j + 1] = temp;
            }
        }
    }

    // Sort the odd array in ascending order using bubble sort
    for (int i = 0; i < odd - 1; i++) {
        for (int j = 0; j < odd - i - 1; j++) {
            if (oddArr[j] > oddArr[j + 1]) {
                int temp = oddArr[j];
                oddArr[j] = oddArr[j + 1];
                oddArr[j + 1] = temp;
            }
        }
    }

    // Calculate the sum of second largest numbers from both arrays
    int evenSum = evenArr[even - 2];
    int oddSum = oddArr[odd - 2];

    cout << "Even array: ";
    for (int i = 0; i < even; i++) {
        cout << evenArr[i] << " ";
    }
    cout << endl;

    cout << "Odd array: ";
    for (int i = 0; i < odd; i++) {
        cout << oddArr[i] << " ";
    }
    cout << endl;

    cout << "Sum of second largest numbers from even and odd arrays: " << evenSum + oddSum << endl;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element at " << i << " index: ";
        cin >> arr[i];
    }

    solve(arr, n);

    return 0;
}