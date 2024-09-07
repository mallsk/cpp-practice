#include <iostream>
using namespace std;
void sumOfn(int a){
  int sum = 1;
  for(int i = 1;i <= a;i ++){
    sum = sum * i;
  }
  cout<<sum;
}
int main(){
  int a;
  cout<<"Enter the number : ";
  cin>>a;
  sumOfn(a);
}

// Output :
// Enter the number : 5
// 120