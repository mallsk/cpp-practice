#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int sum = 0;
    for(int i=1;i<=n;i++){
      if( i % 3 == 0){
        sum = sum + i;
      }
    }
    cout<<"Sum of numbers from 1 to "<<n<<" which is divisible by 3 is "<<sum;
}

// Output :
// Enter the number : 10
// Sum of numbers from 1 to 10 which is divisible by 3 is 18 