#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int countNum(int n);
int main(){
  int count = 0;
  int n ;
  cout << "Input number to count the digits\n";
  cin >> n;
  cout << "Using Recursion : " << countNum(n) << endl;
  while(n != 0){
    n=n/10;
    count++;
  }
  cout<< count << endl;
  
}

int countNum(int n){
  if(n==0){
    return 0;
  }
  return 1+ countNum(n/10);
}