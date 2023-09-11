#include<stdio.h>
int main()
{
	int a[]={16, 18, 19, 13, 29, 34  };
	int n,i;
	n =sizeof(a)/sizeof(a[0]);
	for(i=0;i<n;i++)
	printf("  %d ",a[i]);
	return 0;
	
}
