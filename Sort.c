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
