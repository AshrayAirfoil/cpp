#include <iostream>
#include <vector>
using namespace std;

void printArray(int arr[], int size){
  for (int i = 0 ; i < size ; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

int findDuplicate(int arr[], int size){
  int ans = 0;
  for (int i = 0; i < size; i++){
    ans = ans ^ arr[i];
  }
  return ans;
}

int main(){
  int size;
  int arr[10];
  cin >> size;
  for (int i = 0; i<size; i++){
    cin >> arr[i];
  }
  cout << findDuplicate(arr, size);
}
