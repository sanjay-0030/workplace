#include<stdio.h>
int main(){
    int arrr[] = {1,2,3,4,5};
    int n=5;
    int start = 0;
    int end = n-1;
    while(start<end){
        int temp = arrr[start];
        arrr[start] = arrr[end];
        arrr[end] = temp;
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arrr[i]);
    }   
    return 0;
}