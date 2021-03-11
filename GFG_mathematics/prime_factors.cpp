#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int a);
int main(){
  int n;
  cout << "input the number :\n";
  cin>> n;
  
  for(int i =2;i<sqrt(n);i++){
    if (isPrime(i)){
      int x=i;
      while(n%x==0){
        cout << i <<endl;
        x=x*i;
      }
    }
  }

}

bool isPrime(int a){
  int flag = 1;
  for(int i =2; i<= sqrt(a);i++){
    if(a%i==0){
      return false;
      flag =0;
      break;
    }
  }
  if(flag==1)
  return true;
}