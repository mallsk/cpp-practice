#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter first number :";
    cin>>a;
    cout<<"Enter second number :";
    cin>>b;
    if(a<b){
        cout<<a<<" is minimum number";
    }
    else{
        cout<<b<<" is minimum number";
    }
}

// Output : 
// Enter first number :4
// Enter second number :2
// 2 is minimum number