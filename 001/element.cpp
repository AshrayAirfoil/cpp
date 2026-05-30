#include <iostream> 
#include <vector> 
using namespace std; 

int firstPosition(int arr[], int size, int key){
  int start = 0, end = size - 1, mid = start + (end - start)/2, ans = -1;
  while (start <= end){
    if (arr[mid] == key) ans = mid; end = mid - 1;
    else if (arr[mid] < key) start = mid + 1;
    else end = mid - 1;
    mid = start + (end - start)/2;
  }
  return ans;
}

int lastPosition(int arr[], int size, int key){
  int start = 0, end = size - 1, mid = start + (end - start)/2, ans = -1;
  while (start <= end){
    if (arr[mid] == key) ans = mid; start = mid + 1;
    else if (arr[mid] < key) start = mid + 1;
    else end = mid - 1;
    mid = start + (end - start)/2;
  }
  return ans;
}

int main() {
    int n, element;
    int arr[100];
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    cin>>element;
    int first = firstPosition(arr, n, element);
    int last = lastPosition(arr, n, element);
    cout<<"First position : "<<first<<endl;
    cout<<"Last position : "<<last<<endl;
    return 0;
}
