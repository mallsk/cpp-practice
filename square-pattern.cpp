#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = 1; i <= n; i++){
        //char ch = 'A';
        for(int j = 1; j <= n ; j++){
            //ch = ch + 1;
            cout<<"*"<<" "; // * pattern & number if we replace * as "j"
        }
        cout<<endl;
    }
}

// Output : 
// Enter the number : 4
// * * * * 
// * * * * 
// * * * * 
// * * * * 