#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum = sum + i;
    }
    cout<<"Sum of numbers from 1 to "<<n<<" is "<<sum;
}

// Output :
// Enter the number : 1000
// Sum of numbers from 1 to 1000 is 500500