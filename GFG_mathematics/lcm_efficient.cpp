#include <iostream>
#include <cmath>
using namespace std;

// Based on concept of ---> a*b = gcd(a,b) * lcm(a,b)

int gcd(int a , int b){
  if (b==0)
  return a;
  else return gcd(b,a%b);
}

int main(){
   int a, b;
   cout << "Input the number to find LCM \n";
   cin >> a >>b;

   cout << "LCM of : "<< a << " and "<< b << " = "<< (a*b)/gcd(a,b) << endl;
}