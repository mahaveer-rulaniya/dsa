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
  int res=1;
  for(int i=1; i<=p;i++){
    res = res*n; 
  }
  return res;
}