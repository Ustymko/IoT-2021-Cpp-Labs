#include<stdio.h>
void main(void){
    int n = 5;
    int arr[n];
    int res;
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++){
        res = res ^ arr[i];
    }
    printf("The alone number is %d", res);
}