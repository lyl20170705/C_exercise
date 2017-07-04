void InsertSort(int *p,int length)
{
  int tmp,i,j;
  for(i=1;i<length;i++)
  {
    tmp=p[i];
    for(j=i-1;j>=0 && p[j]<p[j+1];j--)
      p[j+1]=p[j];
      p[j+1]=tmp;
  }
}

void ShellSort(int *p,int length)
{
  int tmp,delta,i,j;
  delta=length;
  do
  {
    delta=delta/3+1;
    for(i=delta;i<length;i++)
    {
      tmp=p[i];
      for(j=i-delta;j>=0 && p[j]>p[j+delta];j-=delta)
        p[j+delta]=p[j];
      p[j+delta]=p[j];
    }
  }while(delta>1);
}

void QuickSort(int *p,int left,int rigth)
{
  if(left>=rigth)
    return;
  int i=left;
  int j=right;
  int key=p[left];
  
  while(i<j)
  {
    while(i<j && key<=p[right])
      j--;
    p[i]=p[j];
    while(i<j && key>=p[i])
      i++;
    p[j]=p[i];
  }
  p[i]=key;
  QuickSort(p,left,i-1);
  QuickSort(p,i+1,right);
}


void BubbleSort(int *p,int len)
{
  int tmp;
  for(int i=0;i<n-1;i++)
    for(int j=0;j<n-i;j++)
      if(p[i]>p[j+1])
      {
        tmp=p[j+1];
        p[j]=p[j+1];
        p[j+1]=tmp;
      }
}
