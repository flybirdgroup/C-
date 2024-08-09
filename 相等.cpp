
#include<iostream>
using namespace std;
int main() {
int a,b,c;
cin >> a >> b >> c;
if (a>b){
    if (b>c)
    cout<< a;

else{
if (a>c)

        cout << a;
else{
     cout << c;
if (b>c)
    cout << b;
else cout << c;
    
}

}
}


return 0;    
}

//     if b > c, then cout >> a
//     else 
//          if a > c, then cout >> a
//           else cout >> c
// else (a < b)
//  if b > c, then cout b
//  else b  then cout c