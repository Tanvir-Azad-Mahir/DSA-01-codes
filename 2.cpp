
#include<iostream>
#include<string>
using namespace std;
int n=5;
string arr[]={"bananna","apple","watermelone"};
int k;
int main(){
for (int i = 0; i < n - 1; i++) {
        int minIndex = i; 

        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[minIndex]) {
                minIndex = j;
            }
        }
        
        if (minIndex != i) {
            string temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
}
    cout<< "Sorted array in ascending order: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}