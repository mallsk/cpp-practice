#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int num = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n ; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}

// Output :
// Enter the number : 5
// 1 2 3 4 5 
// 6 7 8 9 10 
// 11 12 13 14 15 
// 16 17 18 19 20 
// 21 22 23 24 25 
 

// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cout << "Enter the number : ";
//   cin >> n;
//   char ch = 'A';
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= n; j++) {
//       cout << ch << " ";
//       ch++;
//     }
//     cout << endl;
//   }
// }

// Output :
// Enter the number : 5
// A B C D E 
// F G H I J 
// K L M N O 
// P Q R S T 
// U V W X Y 