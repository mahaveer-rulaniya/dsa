#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int n;
  cout << "Input the number : \n";
  cin >> n;
  int flag=0; 
  
  if (n==1 || n==0){
    cout << "No";
  }
  for(int i =2; i<sqrt(n);i++){
    if(n%i==0){
      cout << "Not a prime number\n";
      flag = 1;
      break;
    }
  }
  if(flag==0){
    cout << "It is a prime number \n";
  }
}