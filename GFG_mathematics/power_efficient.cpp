#include <iostream>
#include <cmath>
using namespace std;

int power(int n , int p);
int main(){
  int n , p;
  cout << "Input the number and power : \n";
  cin >> n>>p;
  cout << "The result is :" << power(n,p)<< endl;
}

int power(int n , int p){
  int rev=1;
  if(p%2==0){
    for(int i=1;i<=p/2;i++){
      rev=rev*n;
    }
    return rev*rev;
  }
  else{
    for(int i =1; i<=p ; i++){
      rev = rev*n;
    }
    return rev;
  }
}