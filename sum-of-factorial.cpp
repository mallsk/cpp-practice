#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int sum = 1;
    for(int i=1;i<=n;i++){
        sum = sum * i;
    }
  cout<<"Sum of factorial ("<<n<<") is "<<sum;
}

// Output : 
// Enter the number : 5
// Sum of factorial (5) is 120