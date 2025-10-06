#include<stdio.h>

int main(){
    int arr[5]={1,2,3,4,5};
    int pos =3,val =6;

    for(int i=0;i>pos ;i--)
    arr[i]=arr[i-1];
    arr[pos]=val;

    for(int i=0;i<5;i++)
    printf("%d",arr[i]);
    return 0;
    

}