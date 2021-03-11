#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
  int n;
  cout << "Input the number : \n";
  cin >> n;
  int digit;
  int Num =0;
  int OriginalNum = n;
  while(n != 0){ 

    digit = n%10;
    Num = 10*Num + digit;
    n=n/10;
  }
  if (Num== OriginalNum){
    cout << "Palindrom Number !! \n";
  }
  else cout << "Not a Palindrom !!\n";
}