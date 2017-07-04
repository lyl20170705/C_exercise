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
