#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int factorial(int n);
int main(){
  int n;
  cout << "Input the number : \n";
  cin >> n;
  int fact =1;
  // using recursion
  cout << "Using Resursion : " << factorial(n)<< endl;
  
  // using iteration
  while (n!=0){
    fact = fact*n;
    --n;
  }
  cout << "Factorial using iteration is : "<< fact << endl;
}

int factorial(int n){
  if(n==0){
    return 1;
  }
  return n*factorial(n-1);
}