#include <stdio.h> 
#define SIZE 10

void bubbleSort( int  *const  array, int size);    //�D�`�ƫ���  ��w�ƧǰƵ{��  
 
int main(void)
{
   int a[10]={2,5,9,7,4,6,3,0,8,1,6};  //�D�`�Ƹ�� 
   int i,size;
   
   puts("��ƱƧǫe");
   
    for(i=0;i<=9;i++)
    {
     printf("%d ",a[i]);
    }
    bubbleSort( a, 10);
    
 puts("\n��ƱƧǫ�");
 for(i=0;i<=9;i++)
 {
  printf("%d ",a[i]);
 }
}


