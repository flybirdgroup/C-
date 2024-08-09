#include<iostream>
using namespace std;
int main() {
int c,e,m;
cin >> c >> e >> m;
if ((c+e+m > 270)){
    cout<< "三好学生";
}
    

else{
      if(c+e+m <= 270 && c+e+m > 240)
         cout << "优秀学习标兵";
}
      if(c+e+m <= 240){
         cout << "什么都评不上";
      }
return 0;    

}