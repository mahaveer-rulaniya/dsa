#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int n;
  cout << "Input the number : \n";
  cin >> n;
  int flag=0;

  if(n==1) cout << "Not prime \n";
  if(n==2 || n==3) cout << "prime \n";

  for(int i=5; i<=sqrt(n); i=i+6){
    if(n%i == 0 || n%(i+2)==0){
      cout << "Not a prime number \n";
      flag = 1;
      break;
    }
  }
  if(flag==0){
    cout << "Prime number\n";
  }
}