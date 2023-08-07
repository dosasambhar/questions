#include <iostream>
#include <vector>
using namespace std;

int binarysearch1 (vector<int> a){
  int start=0;
  int end=a.size()-1;
  int mid=(start+end)/2;
 

  while(start<end){
  if(a[mid]<a[mid+1]){
    start=mid+1;
  }
    else{
      end=mid;
    }
    mid=(start+end)/2;
}
    return start;
}



int main() {
 vector <int> a{0,10,5,4,2};
  return binarysearch1(a) ;
}
  
