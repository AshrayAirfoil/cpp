#include <iostream> 
using namespace std; 

int main(){
  /* 
  int n; 
  cin >> n; 
  int i = 0;
  for (i; i < n; i++){
    int j = 0; 
    int k = 1;
    for (j; j<n; j++){
      cout << k << " ";
      k +=1;
    }
    cout << endl;
  }
  1 2 3 4
  1 2 3 4 
  1 2 3 4 
  1 2 3 4 
  */

  /* 
  int n;
  cin >> n;
  int i = 0; 
  for (i; i<n; i++){
    int j = 0;
    int k = n;
    for (j; j < n; j++){
      cout << k << " ";
      k-=1;
    }
    cout << endl;
  }
  3 2 1 
  3 2 1 
  3 2 1
  */

  /*
  int n; 
  cin >> n;
  int i = 0;
  int k = 1;
  for ( i ; i < n ; i++){
    int j = 0;
    for (j; j<n; j++){
      cout << k << " ";
      k += 1;
    }
    k = k;
    cout << endl;
  }
  1 2 3
  4 5 6 
  7 8 9
  */
  /* 
  int n;
  cin >> n;
  int i = 0;
  for (i; i< n; i++){
    int j = 0;
    for (j; j <= i; j++){
      cout << "* ";
    }
    cout << endl;
  }
  *  
  *  *  
  *  *  *  
  *  *  *  *  
  */
  /*
  int n; 
  cin >> n; 
  int i = 1; 
  while (i <= n){
    int j = 0;
    while (j < n - i){
    cout << "* ";
    j++;
    }
    while (j < n){
      cout << i << " ";
      j++;
    }
  cout << endl;
  i++;
  }
  * * * * * * 1 
  * * * * * 2 2 
  * * * * 3 3 3 
  * * * 4 4 4 4 
  * * 5 5 5 5 5 
  * 6 6 6 6 6 6 
  7 7 7 7 7 7 7 
  */
}
