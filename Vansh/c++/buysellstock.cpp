//You are given an array prices where prices[i] is the price of a given stock on the ith day.

//You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

#include<iostream>
#include<climits>

using namespace std;
int main(){

int n;
cout<<"Enter The Size Of Array ";
cin>>n;

int arr[n];

int i,j,start;

cout<<"Enter the Element Of Array \n";
for(i=1;i<=n;i++){
cin>>arr[i];
}

int min = INT_MAX;
int max = INT_MIN;

for(i=1;i<=n;i++){
if(arr[i]<min){
min=arr[i];
start = i;
}

}

for(i=start;i<=n;i++){
if(arr[i]>max){
max = arr[i];
}

}

int profit;

profit = max-min;

cout<<"\n";
cout<<profit;



}
