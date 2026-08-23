#include<stdio.h>
void insertion(int arr[],int size,int pos,int value){
    
    for(int i=size;i>pos;i--){
        arr[i]=arr[i-1];

    }arr[pos]=value;
    size++;
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
    
int main(){
    int arr[10]={1,2,3,4,5};
    int size=5;

    int pos=2;
    int value=45;
   
    
    insertion(arr,size,pos,value);
    printf("hi");
    return 0;
    
}