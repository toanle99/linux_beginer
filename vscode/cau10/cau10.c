/*tính tổng các phẩn tử trong mảng và ghi ra file*/
#include "stdio.h"
#include "stdlib.h"
#include "math.h"
int main()
{
   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, sum = 0;
   
   for(int i=0;i<sizeof(arr)/sizeof(int);i++){
       sum +=arr[i];
       printf("%d ",arr[i]);
   }
   FILE *fptr;
   fptr = fopen("./program.txt","w"); 
   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
   fprintf(fptr,"sum = %d",sum);
   fclose(fptr);
   return 0;
} 
