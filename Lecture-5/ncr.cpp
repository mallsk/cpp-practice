#include <iostream>
using namespace std;
int factorial(int n){
  int fact = 1;
  for(int i = 1;i <= n;i++){
    fact = fact * i;
  }
  return fact;
}
int ncr(int n,int r){
  int nFactorial = factorial(n);
  int rFactorial = factorial(r);
  int ncrFactorial = factorial(n-r);

  return nFactorial / (rFactorial * ncrFactorial);
}
int main(){
  int n,r;
  cout<<"Enter the value of n : ";
  cin>>n;
  cout<<"Enter the value of r : ";
  cin>>r;
  cout<<ncr(n,r);
}

// Output :
// Enter the value of n : 6
// Enter the value of r : 3
// 20 