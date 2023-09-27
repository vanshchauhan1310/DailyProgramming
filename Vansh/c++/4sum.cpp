// Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:
// 0 <= a, b, c, d < n
// a, b, c, and d are distinct.
// nums[a] + nums[b] + nums[c] + nums[d] == target
// You may return the answer in any order.

#include<iostream>
using namespace std;
int main(){
int i,j,k,l,n;
cout<<"Enter the Size Of an Array ";
cin>>n;

int arr[n];
cout<<"Enter the Array ";

cout<<"\n";

for(i=0;i<n;i++){
cin>>arr[i];
}

int target;
cout<<"Enter The Target ";
cin>>target;

cout<<"\n";
for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
for(k=j+1;k<n;k++){
for(l=k+1;k<n;l++){

if(arr[i]+arr[j]+arr[k]+arr[l]==target){
cout<<arr[i]<<""<<arr[j]<<""<<arr[k]<<""<<arr[l];
}

}
}
}
}

}
