#include <iostream>
using namespace std;
int main() {
  int n;
  cout<<"Enter the number : ";
  cin>>n;
  int sum = 0;
  for(int i = 0; i <= n; i++){
    if( i % 2 != 0 ){
      sum = sum + i;
    }
  }
  cout<<"Sum of odd number from 1 to "<<n<<" is "<<sum;
}

// Output : 
// Enter the number : 10 
// Sum of odd number from 1 to 10 is 25 