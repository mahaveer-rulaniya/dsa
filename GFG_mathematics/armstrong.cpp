#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
  int n;
  cout<< "please input number : \n";
  cin>>n;
  int sum=0;
  int originalNum= n;

 while(n!=0){
   int digit = n%10;
   sum = sum + pow(digit , 3);
   n=n/10;
 }
 if ( sum== originalNum){
   cout << "Armstrong Number !!";
 }
 else cout << "Not a armstrong number !";
}