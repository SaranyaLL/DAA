#include<stdio.h>
int main()
{
	int n,rem,sum=0,i;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		rem=n%i;
		if(rem==0)
		{
			sum=sum+i;
		}
	}
		if(sum==n)
		{
			printf("%d is perfect number",sum);
		}
		else
		{
			printf("%d is not perfect number",sum);
		}
	
	return 0;
}
OUTPUT:
   Enter the number:28
28 is perfect number
