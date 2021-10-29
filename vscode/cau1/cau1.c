#include "stdio.h"
int n = 12; 
int main(){
    printf("hello world!\n");
    float sum = 1;
    for(int i=2;i<n; i++){
        sum += (float)1/i;
    }
    printf("%f \n",sum);
    return 0;
}