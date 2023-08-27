// given an array arr[] of size n for every i from 0 to n-1 output maximum elemenet 

#include<iostream>
#include<climits>
using namespace std;

int main(){
int n;
cin>>n;

int arr[n];

int i;
int mx = INT_MIN;

for(i=0;i<n;i++){
cin>>arr[i];
}


for(i=0;i<n;i++){
mx = max(mx,arr[i]);
cout<<mx;
}


}
