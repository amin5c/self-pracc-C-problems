#include<stdio.h>
int main(){
    int arr[] = {34,56,54,32,67,89,90,32,21};
    int arrlen = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<arrlen/2; i++){
        int temp = arr[i];
        arr[i]=arr[arrlen-1-i];
        arr[arrlen-1-i]=temp;
    }
    for(int i=0; i<arrlen; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}