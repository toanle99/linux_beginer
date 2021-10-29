/*đếm số lần xuất hiện của ký tự c trong chuỗi s*/ 
#include "stdio.h" 
int mostCharShow(char s[], char c, int n){
    int show = 0; 
    for(int i=0;i<n;i++){
        if(s[i] == c){
            show++;
        }
    }
    return show;
}
void main(){
    int n = 40;
    char c = 'c';
    char s[] = "abc abc abc abc abc abc abc abc abc cdef";
    printf("so xuat hien nhieu nhat: '%c' trong '%s' : %d\n", c, s, mostCharShow(s,c,n));
}