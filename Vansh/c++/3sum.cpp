#include<iostream>
using namespace std;
int main(){
int i,j,k,n;
cout<<"Enter the Size Of an Array ";
cin>>n;

int arr[n];
cout<<"Enter the Array ";

cout<<"\n";

for(i=0;i<n;i++){
cin>>arr[i];
}

cout<<"\n";
for(i=0;i<n;i++){
for(j=i+1;j<n-1;j++){
for(k=i+2;k<n-2;k++){

if(arr[i]+arr[j]+arr[k]==0){
cout<<i<<""<<j<<""<<k<<"\n";
}

}
}
}

}
