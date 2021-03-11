#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int a, b;
  cout << "Input the numbers : \n";
  cin >> a>>b;
  
  int maxium = max(a,b);

  do{
     if(maxium%a ==0 && maxium% b ==0){
       cout << "LCM is "<< maxium << endl;
       break;
     }
     else ++ maxium;
  }while(true);

}