#include<iostream>
using namespace std;
int main () {
int n;
cin >> n;
if (n <= 60)
    if (n < 10)
        cout << "00:0" << n;
    else
        cout << "00:" << n;
else
    if (n%60 < 10 )
        if (n / 60 < 10 )
            cout << "0" << n / 60 << ":0" << n%60;
        else
            cout << n / 60 << ":0" << n%60;
    else
        if (n / 60 < 10 ) 
            cout << "0" << n / 60 << ":" << n%60;
        else  
            cout << n / 60 << ":" << n%60;
return 0;    
}