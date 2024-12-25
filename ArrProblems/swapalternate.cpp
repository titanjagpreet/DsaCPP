#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size){
    for (int i = 0; i < size; i+=2)
    {
        if (i+1 < size)
        {
            swap(arr[i], arr[i+1]);
        }
    }
}

void printArr(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int even[8] = {2,3,4,5,6,7,8,9};
    int odd[5] = {11, 33, 44, 77, 88};

    swapAlternate(even, 8);
    printArr(even, 8);

    // Similarly for ODD Array
    
    return 0;
}