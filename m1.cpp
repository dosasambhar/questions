#include <iostream>
using namespace std;

int bs(int a[], int s, int e, int target){
  while(s<=e){
    int mid=(s+e)/2;
    if(a[mid]==target){
      return mid;
    }

    if(a[mid]<target){
      s=mid+1;
    }

    else{
      e=mid-1;
    }
  }
  return -1;
}

int es(int a[], int n, int target){
  if(a[0]==target){
    return -1;
  }

  int i = 1;
  while(i<n && a[i]<=target){
  i = i*2;
  }
  return bs(a, i/2, min(i, n-1) target);
}

int main() {
int a[]={3,4,5,6,7,10,13,14,15,17,19,20}
int n=12;
int target= 17;

int result = es(a, n, target);
cout<<result<<endl;
return 0;
}