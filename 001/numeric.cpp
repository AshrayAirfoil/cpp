#include <iostream> 
using namespace std;

int main(){
  /*
  int n;
  cout << "Enter the value of n: ";
  cin >> n;
  if (n<0) cout << "Invalid";
  else cout << "Number is: " << n << endl;

  int i = 1;
  int sum = 0;
  while (i <= n) sum += i; i++;
  cout << "Sum of numbers is: " << sum << "\n";
  */ 

  int n; 
  cin >> n; 
  int i = 0;
  int j = 0;
  for (i; i<n; ++i){
    for (j; j<n; j++){
      cout << "* ";
    }
    cout << endl;
  }
  
}
  
  
}
  

