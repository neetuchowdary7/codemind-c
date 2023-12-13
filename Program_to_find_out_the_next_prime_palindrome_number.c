#include<stdio.h>
int prime(int n)
{
	int count=0, i;
	for (i =1; i<=n; i++)
	{
		if (n%i==0)
		{
			count++;
		}
	}
	if (count == 2)
		{
			return 1;
		}
		else 
		return 0;
}
int rev(int n)
{
	int reve=0,r;
	while(n>0)
	{
		r=n%10;
		reve= reve* 10 + r;
		n/=10;
	}
	return reve;
}

int gnpp(int n)
{
	while (1)
	{
		if (n == rev(n) && prime(n))
		{
			break;
		}
		else
		{
			n++;
		}
	}
	return n;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",gnpp(n+1)); //gnpp= get next prime palindrome
}