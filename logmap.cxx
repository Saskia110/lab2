#include <iostream>
using namespace std;

int main(){
  int N = 100;
 
  for(double r=1.5; r<4; r+=0.001){
     double x=0.5;
     for(int i=1; i<=N;i++){
      
      x= x*r*(1-x);
      if (i>=20) {
	  cout<< r<< "\t" << x << endl;
      }
    }
  }
  return 0;
}