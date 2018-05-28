void swap(int *element1Ptr,int *element2Ptr); // 數值互換副程式

void bubbleSort( const int  *const array ,int size)       //非常數指標  氣泡排序副程式 
{
 int j,n;
 int count;
 for(count=0;count<size-1;count++)
 {
  for(j=0;j<size-1;j++)
  {
   if (array[j]>array[j+1])
   {
    swap(&array[j],&array[j+1]);
   }
  }
 }
}

void swap(int *element1Ptr,int *element2Ptr)
{
 int hold= *element1Ptr;
 *element1Ptr=*element2Ptr;
 *element2Ptr=hold;
}
