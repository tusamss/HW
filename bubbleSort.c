void swap(int *element1Ptr,int *element2Ptr); // �ƭȤ����Ƶ{��

void bubbleSort( const int  *const array ,int size)       //�D�`�ƫ���  ��w�ƧǰƵ{�� 
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
