#include <iostream>
#include <cmath>

using namespace std;

int main(){
  int n;
  cout << "Input the number to find the number of trailing zeroes : "<< endl;
  cin >> n;
  int ze =0;
  for(int i=5 ; i<=n ; i = i*5){
    ze = ze + floor(n/i);
  }
  cout << "Number of zeroes are : -- " << ze << endl;
}