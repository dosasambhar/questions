#include <iostream>

using namespace std;
int main(){
  int a[5]={1,2,5,5,2};
  int n=5;
  for(int i=0; i<n; i++){
    int index =abs(a[i]);
    if(a[index-1]>0){
      a[index-1] *= -1;
    }
  }
  for(int i=0; i<n; i++){
    if(a[i]>0){
      cout<<i+1<<" ";
    }
  }
}