#include <iostream>
#include <vector>
using namespace std; 

void inputArray(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cin>>arr[i];
    }
}

void printArray(int arr[], int size) {
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sort012(int arr[], int size) {
    int low = 0;
    int mid = 0;
    int high = size-1;
    while(mid <= high) {
        switch(arr[mid]) {
            case 0:
                swap(arr[mid++], arr[low++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid], arr[high--]);
                break;
        }
    }
}
