#include<stdio.h>
float simpint(float p,float n,float r);
int main()
{
	float si,p,n,r;
	char ch;
	printf("enter the Y or y for senior  : ");
	scanf("%c,&ch")
	
	printf("enter the principal value : ");
	scanf("%f,&p")
	printf("enter the no of years : ");
	scanf("%f",&n);
	if (ch=='y'|| 'Y')
	r=12/100.0;
	else
	r=10/100.0;
	simpint(p,n,r);
	return 0;
}
      float simpint (float p,float n'float r)
{
	float si;
	si = p*n*r;
	printf("simple interest =%f",si);
}

