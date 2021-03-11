#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int n;
  cout << "input the number: \n";
  cin>> n;

  for(int i=1; i<sqrt(n);i++){
    if(n%i ==0){
      cout << i << endl;
    }
  }
  for(int i=sqrt(n) ; i>=1;i--){
    if(n%i==0){
      cout << n/i << endl;
    }
  }
}