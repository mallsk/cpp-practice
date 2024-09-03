#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter the number : ";
  cin >> n;
  int i;
  for (i = 2; i < n; i++) {
    if (n % i == 0) {
      cout << "Given number (" << n << ") is not Prime";
      break;
    }
  }
  if (i == n) {
    cout << "Given number (" << n << ") is Prime";
  }
}

// Output:
// Enter the number : 17
// Given number (17) is Prime