#include<stdio.h>
#include<string.h>
int  main()
{
	char s[10];
	char  *p;
	int len ,i;
	p=s;
	scanf("%s",s);
	len =strlen (s);
	for (i=len;i>0;i--)
	printf(" %c",*(s+i));
	return 0;
	
}
