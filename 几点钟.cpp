#include<iostream>
using namespace std;
int main () {
int n;
cin >> n;
if (n / 60 <= 9)
    cout << "0" << n/60 << ":" ;
else
    cout << n/60 << ":";
if (n % 60 <= 9)
    cout << "0" << n%60;
else    
    cout << n%60;
return 0;    
}