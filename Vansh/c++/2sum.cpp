#include<iostream>
using namespace std ;

int main(){

int n,sum;
cout<<"Enter The size of an array";
cin>>n;


int arr[n];

int i,j;

cout<<"Enter the array"<<endl;

for(i=0;i<n;i++){
cin>>arr[i];
}

cout<<"Enter the sum";
cin>>sum;

for(i=0;i<n-1;i++){
for(j=i+1;j<n;j++){

if(arr[i]+arr[j]==sum){
cout<<i;
cout<<j;
}

}
}

}
