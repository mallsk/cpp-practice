#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number : ";
  cin>>n;
  char ch = 'A';
  for (int i = 0; i < n; i ++){
    for (int j = 0;j <= i; j++){
      cout<<ch;
    }
    cout<<endl;
    ch++;
  }
}

// Output :
// Enter the number : 4
// A
// BB
// CCC
// DDDD
 