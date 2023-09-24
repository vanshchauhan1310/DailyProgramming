#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum;
    printf("Enter the sum: ");
    scanf("%d",&sum);
    printf("The quadruplets are: ");
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                for(int l=k+1;l<n;l++){
                    if(arr[i]+arr[j]+arr[k]+arr[l]==sum){
                        printf("%d %d %d %d\n",arr[i],arr[j],arr[k],arr[l]);
                    }
                }
            }
        }
    }
    return 0;
}
