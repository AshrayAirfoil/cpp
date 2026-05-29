#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long reversed_num = 0; 

    while (n != 0) {
        int digit = n % 10;
        reversed_num = (reversed_num * 10) + digit;
        n /= 10;
    }

    cout << "Reversed integer: " << reversed_num << endl;

    return 0;
}
