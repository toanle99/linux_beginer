/*tìm phần tử xuất hiện nhiều nhất trong mảng*/ 
#include "stdio.h" 
int mostShow(int a[], int n){
    int i = 0, maxShow = 0, aMax = a[0];
    while(i<n){
        int j = i+1 , show = 1;
        while (j<n){
            if(a[i] == a[j]){
                show ++;
                int k = j;
                while(k<n){
                    a[k] = a[k+1];
                    k++;
                }                
                n--;
            }
            else
                j++;
        }
        aMax=maxShow<show?a[i]:aMax; 
        maxShow=maxShow<show?show:maxShow;  
          
        i++; 
    }
    return aMax;
}
void main(){
    int a[] = {1,2,1,2,1,1,1,2,2,2,2,2}, n = 12;
    printf("so xuat hien nhieu nhat: %d\n", mostShow(a,n));
}