/*kiểm tra tính đối xứng của mảng*/ 
#include "stdio.h" 
int isSymmetry(int a[], int n){
    for(int i=0;i<=n/2;i++)
        if(a[i] != a[n-1-i]) 
            return 0;
    return 1;
}
void main(){
    int a[] = {1,2,3,4,5,6,7,8,9,0}, b[] = {1,2,3,4,5,5,4,3,2,1}, n = 10;
	printf(isSymmetry(a,n)==0?"a khong doi xung\n":"b doi xung\n");
    printf(isSymmetry(b,n)==0?"b khong doi xung\n":"b doi xung\n"); 
}
