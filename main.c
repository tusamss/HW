#include <stdio.h> 
#define SIZE 10

void bubbleSort( int  *const  array, int size);    //非常數指標  氣泡排序副程式  
 
int main(void)
{
   int a[10]={2,5,9,7,4,6,3,0,8,1,6};  //非常數資料 
   int i,size;
   
   puts("資料排序前");
   
    for(i=0;i<=9;i++)
    {
     printf("%d ",a[i]);
    }
    bubbleSort( a, 10);
    
 puts("\n資料排序後");
 for(i=0;i<=9;i++)
 {
  printf("%d ",a[i]);
 }
}


