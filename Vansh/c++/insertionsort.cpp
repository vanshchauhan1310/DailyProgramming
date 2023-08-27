#include<iostream>
using namespace std; 

int main(){
int n;
cin>>n;

int arr[n];

int i,j;

for(i=0;i<n;i++){
cin>>arr[i]>>endl;
}

j = i-1;

for(i = 1;i<n;i++){
int current = arr[i];
while(arr[j]>current){
arr[j+1] = arr[j];
j--;
}
arr[j+1]=current;
}


for(i=o;i<n;i++){
cout<<arr[i]<<endl;
}

}
