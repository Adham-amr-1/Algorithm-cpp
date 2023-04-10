#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int main() {
  int num1, num2,res;
  cin>>num1>>num2;
  res = sum(num1,num2);
  cout<<res;
  return 0;
}
