#include <iostream>
using namespace std;

int Binary_Search(int arr[], int n, int target) {
    int l = 0;       // Left boundary
    int r = n - 1;   // Right boundary
    int mid= (l+r)/2;
    while (l <= r) {
         mid = (l +r) / 2; // Recalculate mid each iteration

        if (arr[mid] == target) {
            return mid; // Return index of the target
        } else if (arr[mid] > target) {
            r = mid - 1; // Search in the left half
        } else {
            l = mid + 1; // Search in the right half
        }
    }

    
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]); // Calculate the size of the array
    int target = 4;

    int x = Binary_Search(a, n, target);
        cout << "Target found at index: " << x << endl;
        return 0;
}
