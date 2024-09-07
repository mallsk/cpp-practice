#include <iostream>
using namespace std;
int main() {
  char ch;
  cout<<"Enter a character : ";
  cin>>ch;
  //Another method is Using ASCII values
  if(ch >= 'a' && ch <= 'z'){
    cout<<"Given character ("<<ch<<") is LowerCase";
  }
  else if(ch >= 'A' && ch <= 'Z'){
    cout<<"Given character ("<<ch<<") is UpperCase";
  }
  else{
    cout<<"Given character ("<<ch<<") is Invalid";
  }
}

// Output : 
// Enter a character : A
// Given character (A) is UpperCase 