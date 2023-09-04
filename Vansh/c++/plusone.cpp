//You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

#include<iostream>
using namespace std;

int main(){
int n;

cout<<"Enter The size of array \n";
cin>>n;

int arr[n];
cout<<"Enter the Element of array \n";
int i;

for(i=0;i<n;i++){
cin>>arr[i];
}

arr[n-1] += 1;

cout<<"Element of array after plus one is \n";
for(i=0;i<n;i++){
cout<<arr[i];
}

} 
