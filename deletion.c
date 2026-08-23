#include<stdio.h>
void deletion(int arr[],int n,int pos){
    for(int i=pos;i<n-1;i++){
        arr[i]=arr[i+1];

    }n--;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int arr[10]={1,2,3,4,5};
    int pos=3;
    int n=5;
    deletion(arr,n,pos);
    return 0;
}