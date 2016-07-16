#include <stdio.h>
int main(void) {
	int a[12],b[12],sum[12];
	int i;
  printf("\n Enter the  a:");
  for(i=0;i<12;i++)
  scanf("%d",&a[i]);
   printf("\n Enter the b:");
  for(i=0;i<12;i++)
  scanf("%d",&b[i]);
   for(i=0;i<12;i++)
 sum[i]=a[i]+b[i];
 printf("\n Sum of array is :");
 for(i=0;i<12;i++)
 printf("\t%d",sum[i]);
 	return 0;
}
