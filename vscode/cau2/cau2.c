#include "stdio.h"
void main(){
    int n = 100000000, i = 0;
    int a[100]; 
    printf("dec(%d) -> hex ",n);
    while(n/2>0){
        a[i] = n % 2;
        n /=2;
        i ++;
    }
    a[i] = n % 2;    
    for(int j=i;j>=0;j--)
        printf("%d",a[j]);    
    printf("\n");
}