#include <iostream> 
using namespace std;

int main(){
  int n; 
  cin >> n;
  int i = 0; 
  int k = 1;
  int j = 0;
  int p = (n+1)*0.5*n + 1;

  for (i; i < n ; i++){
    int j = 0;
    for (j ; j < n - i; j++){
      cout << k << " ";
      k++;
    }
    for (j = n - i ; j < 2 * (n - i ) ; j++){
      cout << p << " ";
      p++;
    } 
    cout << endl;
  }
}

/*
1 2 3 4 5 16 17 18 19 20 
6 7 8 9 21 22 23 24 
10 11 12 25 26 27 
13 14 28 29 
15 30 
*/
