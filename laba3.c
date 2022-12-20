#include<stdio.h>
void main(void){
    const int n = 5;
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int res = 0;
    for (int i = 0; i < n; i++){
        res ^= arr[i];
    }
    printf("The alone number is %d", res);
}