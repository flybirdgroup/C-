#include<iostream>
using namespace std;
// if a > b; {
//      if b > c, then cout >> a
//     else 
//          if a > c, then cout >> a
//           else cout >> c }

// else (a < b) 
//  if b > c, then cout b
//  else b  then cout >> c
int main() {
int a,b,c;
cin >> a >> b >> c;
if (a>b){
    if(b>c){
       cout<< a;
        }         
    else{
        // b < c 
        if (a>c) {cout << a; }
        else cout << c;
}
        }
else{ 
    if (a>c){
        cout << b;
    }
    else {
        if (b<c){
            cout<< c;
        }
        else cout<< b;
        
        }
return 0;    
}
}
