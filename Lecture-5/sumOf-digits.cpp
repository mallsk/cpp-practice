#include <iostream>
using namespace std;
void sumOfDigits(int n){
  int sum = 0;
  while(n>0){
    int lastDigit = n % 10;
    n = n / 10;
    sum = sum + lastDigit;
  }
  cout<<sum;
  
}
int main(){
  int n;
  cout<<"Enter the number :  ";
  cin>>n;
  sumOfDigits(n);
}

// Output : 
// Enter the number :  123456789
// 45