#include <stdio.h>
int reverseDigits(int n)
{
	int sum;
	
	sum=0;
	while( n!=0)
	{
		sum=(sum*10)+(n%10);
		n=n/10;
		
	}
	return sum;
}
int isArmstrong(int num)
{
	int a,n,sum;
	n=num;
	sum=0;
	while(num!=0)
	{
		a=num%10;
		sum=sum+(a*a*a);
		num=num/10;
	}
	if(n==sum)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isAdams(int num)
{
	if((num*num)==reverseDigits((reverseDigits(num)*reverseDigits(num))))
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
int isPrime(int num)
{
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int isPrimePalindrome(int num)
{
	if(isPrime(num)&&(num==reverseDigits(num)))
	{
		return 1;
	}
	else
	{
	  return 0;
}
}
