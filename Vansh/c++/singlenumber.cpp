#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter the Size of array ";
cin>>n;

int arr[n];
int i;

cout<<"Enter The array ";

for(i=0;i<n;i++){
cin>>arr[i];
}

cout<<"Element in the array are ";

for(i=0;i<n;i++){
cout<<arr[i];
}

cout<<"\n";

int result = 0;
for(i=0;i<n;i++){
result ^= arr[i];
}

cout<<result;


}

