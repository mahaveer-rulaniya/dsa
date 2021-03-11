#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int n;
  cout << "input the number : \n";
  cin >> n;
// Efficient Method
  cout << "Efficient :: " ;
  for(int i=1; i<=sqrt(n);i++){
    if(n%i==0){
      cout<< i << endl;
      if(i!=n/i)
      cout << n/i << endl;
    }
  }
  //Basic 
  cout << "Basic Solution :: ";
  for(int i=1; i<=n;i++){
    if(n%i==0){
      cout << i << endl;
    }
  }
}