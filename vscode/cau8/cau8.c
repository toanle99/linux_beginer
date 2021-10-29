/* thay thế ký tự bất kỳ trong chuỗi thành ký tự mới*/
#include "stdio.h" 
void repleaceAll(char s[], char c,char x, int n){
    printf("%s\n",s);
    printf("repleace all '%c' -> '%c'\n",c,x);
    for(int i=0;i<n;i++){
        if(s[i] == c){
            s[i]=x;
        }
    }
    printf("%s\n",s);
}
void main(){
    int n = 40;
    char c = 'c', x = 'g';
    char s[] = "abc abc abc abc abc abc abc abc abc cdef";
    repleaceAll(s,c,x,n);
}