
#include<stdio.h>
int main(){
  int a[50],n,i,big,small;

  printf("\nEnter the size of the array: ");
  scanf("%d",&n);
  printf("\nEnter %d elements in to the array: ",n);
  for(i=0;i<n;i++)
      scanf("%d",&a[i]);

big=a[0];
small=a[0];
  for(i=1;i<n;i++)
  {
      if(big<a[i])
          { big=a[i];
           printf("Largest element: %d",big);
          }
      else{ 
          if(small>a[i])
           small=a[i];
           printf("Smallest element: %d",small);
           break;
          }
  }

  return 0;
}
