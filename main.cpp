#include <iostream>
#include <vector>
using namespace std;

int bs(int dividend, int divisor){
   int ans=0;
  int s =0;
  int e = dividend;
  while(s<=e){
    int mid=(s+e)/2;
    if(mid*divisor==dividend){
      return mid;
    }
    if(mid*divisor>dividend){
      e=mid-1;
    }
   
    else{
      ans = mid;
      s=mid+1;
    }
  }
  return ans;
}

int main(){
  int dividend = 32;
  int divisor = 3;
  int ans = bs(dividend , divisor);
  cout<<ans<<endl;
  return 0;
}