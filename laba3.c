#include<stdio.h>
void main(void){
    int n;
    printf("Enter the size of array: \n");
    scanf("%d", &n);
    int mass[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &mass[i]);
    }
    int res;
    for (int i = 0; i < n; i++){
        res = res ^ mass[i];
    }
    printf("The alone number is %d", res);
}