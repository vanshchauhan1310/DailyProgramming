#include<iostream>
using namespace std;

int main(){

int n;
cout<<"Enter The Size Of Array ";
cin>>n;

int arr[n];
int i;

cout<<"Enter the Element of Array ";
for(i=0;i<n;i++){
cin>>arr[i];
}

int num;
cout<<"Enter the element which is suppose to be inserted ";
cin>>num;

int pos;
cout<<"Enter the position ";
cin>>pos;

if(pos<n){
arr[pos] = num;
}
else{
cout<<"You have entered element in wrong position\n";
}


cout<<"Element of Array are ";
for(i=0;i<n;i++){
cout<<arr[i];
}

}
