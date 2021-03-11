#include<iostream>
#include<cmath>

using namespace std;
int gcd(int a, int b);

int main(){
   int n , m;
   cout << "Input the numbers : \n";
   cin >> n >> m;
  // Efficeint implimentation
   cout << "GCD is : "<< gcd(n,m) << endl;

   //basic implimentation

   while(n!=m){
     if(n>m)
     n=n-m;
     else m=m-n;
   }
   cout << "HCF is ---->"<< n;
}

int gcd(int a, int b){
  if(b==0){
    return a;
  }
  else return gcd(b,a%b);
}