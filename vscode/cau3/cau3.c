#include "stdio.h" 
void print(int a[], int n){
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}
void main(){
    int a[] = {1,2,3,4,5,6,7,8,9,0}, n = 10;
	print(a,n);
    for(int i=0;i<n/2;i++){
        int tam = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = tam; 
    }
    print(a,n);
}
