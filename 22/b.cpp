#include<iostream>
using namespace std;

// 这是个艾斯比题目，题干表述有点问题
double money(double n){
  double ans = 200;
  if(n > 3){
    if(n <=5)
      ans += (n - 3) * 20;
    else ans += 2 * 20;
  }
  if(n > 5){
    ans += (n - 5) * 30;
  }
  return ans;
}
int main(){
  double n;
  cin>>n;
  cout<<money(n);
  return 0;
}