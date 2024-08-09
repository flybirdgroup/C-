#include<iostream>
using namespace std;
int main (){
    int a,b;
    cin >> a >> b;
while (a <= b){
  if(a % 5 == 0 || a % 7 == 0)
    cout << a << endl;
    a = a + 1;
}
    if(a == b){
       cout<< b;
    }

return 0;
}