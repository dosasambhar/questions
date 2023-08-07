#include <iostream>
#include <vector>
using namespace std;

int pivot(vector<int>a){
  int s=0;
  int e=a.size()-1;
  int mid=(s+e)/2;
  
  while(s<=e){
    if(a[mid]>a[mid+1]){
      return mid;
    }
    if(a[mid]< a[mid-1]){
      return mid-1;
    }
    if(s==e){
      return s;
    }
  //   if(a[s]>a[mid]){
  //     e=mid-1;
  //   }
  //   else{
  //     s=mid+1;
  //   }
  //   mid=(s+e)/2;
  // }
    if(a[e]<a[mid]){
      s=mid+1;
    }
    else{
      e=mid-1;
    }
    mid=(s+e)/2;
  }
  return -1;
}


int main() {
 vector <int> a{8,9,10,2,4,6};
 int ans = pivot(a);
  if(ans==-1){
    cout<<"not found";
  }
  else {
    cout<<"pivot"<<ans;
  }
}
  
