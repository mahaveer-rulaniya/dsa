#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int a, b;
  cout << "Input the firest number : \n";
  cin>> a;
  cout << "Input second number : \n";
  cin >> b;

  for(int i=min(a,b); i>=1; --i){
    if(a%i == 0 && b%i==0){
      cout << i << " is HCF"<< endl;
      break;
    }
  }
}