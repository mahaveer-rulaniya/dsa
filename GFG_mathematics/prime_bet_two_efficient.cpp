#include <iostream>
#include <cmath>
using namespace std;

//SEIVE OF ERATOSTHENES ALGORITHM
// check the divisibility by 2, 3 and 5 and mark them False in the array and only prime numbers are left
int main(){
   // ?
   // ?
}

bool isPrime(int a){
  for(int i=2;i<=sqrt(a);i++){
    if(a%i==0){
      return false;
    }
  }
  return true;
}