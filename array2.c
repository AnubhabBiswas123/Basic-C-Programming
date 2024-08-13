#include <stdio.h>
int main()
{
  int a[10000],i,n,no,s;
  printf("Enter the number:");
  scanf("%d",&n);
  s=0;
  printf("Enter the number you want to search:");
  scanf("%d",&no);
  printf("Enter all the numbers:");
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
   if(a[i]==no)
   {
     s++;
     if(s==1)
     printf("The number %d is present in index %d ",no,i);
     else
     printf("%d ",i); 
   }
  }
  if(s==0)
  printf("The number is not present in the array");
  else
  printf("\nThe no. of times the element %d present in the array is %d",no,s);
return 0;
}
     
     
  
