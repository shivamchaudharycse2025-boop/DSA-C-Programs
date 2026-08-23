#include<stdio.h>
int main(){
    int a1[10]={1,2,3};
    int n1 =3;
    int a2[10]={6,7};
    int n2=2;
    int merged[10];
    for(int i=0;i<n1;i++){
        merged[i]=a1[i];
    }for(int i=0;i<n2;i++){
        merged[n1+i]=a2[i];
    }for(int i =0;i<n1+n2;i++){
        printf("%d ",merged[i]);
    }
    return 0;
}