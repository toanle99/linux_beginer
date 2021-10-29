/*  quản lý sinh viên bằng struct */
#include "stdio.h" 
#include "string.h"
struct student{
    int msv;
    char name[30];
    int old;
    char gender[5];
} student;
void menu(){
    printf("---student---\n1. add a student\n2. show list student\n3. exit\n---------\n selected: ");
}
void show(struct student s){
    printf("\nmsv: %d, name: %s, old: %d, gender: %s\n",s.msv,s.name,s.old,s.gender);
}
void main(){
    struct student s[10];
    int type, n = 0; 
    do{
        menu();
        scanf("%d",&type);
        switch (type){
        case 1: 
            fflush(stdin);
            printf("\n----add student-----\n");
            printf("msv: ");
            scanf("%d",&s[n].msv); 
            printf("name: ");
            scanf("%s",&s[n].name); 
            printf("old: ");
            scanf("%d",&s[n].old); 
            printf("gender: ");
            scanf("%s",&s[n].gender); 
            printf("%d\n",s[0].old);
            n++;
            break;
        case 2:
        printf("\n-----liss student-------\n"); 
            for(int i=0;i<n;i++){
                show(s[i]);
            }
            printf("\n");
            break;
        case 3:
            break;
        default:
            printf("\nplease select in round(1-3)!!\n");
            break;
        }
    }while(type!=3);
}
