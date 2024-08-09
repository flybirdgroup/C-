#include <iostream>
using namespace std;
int main(){
int e,c,m;
cin >> e >> c >> m;
int sum;
if (c < 80){
    c = 80;
}
if (e < 80){
    e = 80;
}
if (m < 80){
    m = 80;
}
sum = c + e + m;
if (sum > 270){
    cout << "Yes";
}
else{
    cout << "No";
}    
return 0;
}