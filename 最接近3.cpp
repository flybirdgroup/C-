#include<iostream>
using namespace std;
int main() {
int n;
cin >> n;
if ( n % 3 == 0)
        cout << n;
else
    if ( n % 3 == 1)
    cout << n - 1;
    else        
        if  (n % 3 == 2)
        cout << n + 1;
return 0;

    
    
}



