#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int n;
  cout << "Imput the number: \n";
  cin >> n;

  if(n<=1) return 0;
  //check divisibility by 2 and 3
  while(n%2==0){
    cout << 2 << endl;
    n=n/2;
  }
  while(n%3==0){
    cout << 3 << endl;
    n=n/3;
  }
  // every prime number can be expressed as 6n-1 and 6n+1 where n is natural number
  for(int i=5 ; i<=sqrt(n); i=i+6){
    while(n%i ==0){
      cout << i << endl;
      n=n/i;
    }
    while(n%(i+2)==0){
      cout << (i+2)<<endl;
      n=n/(i+2);
    }
  }
  if(n>3) cout << n << endl;
}