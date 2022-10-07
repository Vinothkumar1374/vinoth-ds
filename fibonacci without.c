# include<stdio.h>
int main()
{
  int i,n,firstterm=0, secondterm=1, sum=0;
  printf("\n enter number of terms required in fibonacci series:");
  scanf("%d",&n);
  printf("\n fibonacci series is:\n\n\n%d %d",firstterm,secondterm);
  i=2;
  while(i<n)
  {
  	sum=firstterm+secondterm;
  	firstterm=secondterm;
  	secondterm=sum;
  	++i;
  	printf("%d ",sum);
  }
  return 0;
}
