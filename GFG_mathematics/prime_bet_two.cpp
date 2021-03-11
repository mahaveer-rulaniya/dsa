#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int a);

int main(){
   int a , b;
   cout << "Input the numbers : - \n";
   cin >> a >> b;
   int Min = min(a,b);
   int Max = max(a,b);
   cout << "Prime numbers between "<< a << " and "<< b << " are : "<<endl;
   for(int i= Min; i<=Max; i++){
     if(isPrime(i)){
       cout << i << endl;
     }
   }

}

bool isPrime(int a){
  for(int i=2;i<=sqrt(a);i++){
    if(a%i==0){
      return false;
    }
  }
  return true;
}