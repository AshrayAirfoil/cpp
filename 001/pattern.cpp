#include <iostream> 
using namespace std;

int main(){
  /*
  int n; 
  cin >> n; 
  int i = 0;
  for (i; i<n; i++){
    int j = 0;
    for (j; j<n; j++){
      cout << "* ";
      
    }
    cout << endl;
  }
  */
  int i = 0; 
  int n;
  cin >> n;
  for (i; i < n; i++){
    int j = 0;
    for (j; j < n; j++){
      int k = i + 1; 
      cout << k << " ";
    }
    cout << endl;
  }
}
