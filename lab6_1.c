#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	float x = 263.125f;
	int xi = (int) x;
	int s1=0;
	char s2[5]={};
	float xd = x - xi;
	int d=0, i=0;
	while(xi != 0)
	{
		d=xi%2;
		s1 = pow(10,i)*d + s1;
		xi = xi/2;
		i++;
	}
	
	while(xd != 0)
	{
		xd *= 2;
		if(xd>=1)
		{
			strcat(s2, "1");
			xd -= 1;
		}
		else
			strcat(s2, "0");
		
	}
	printf("%d.%s\n", s1, s2);
	
	int s3 =(int) (s1 % (int)pow(10,i-1));
	int test=s3;
	int l=0;
	while(test !=0)
	{
		test/=10;
		l++;
	}
	int n = i-1+127;
	int n1=0;
	i=0;
	while(n != 0)
	{
		d=n%2;
		n1 = pow(10,i)*d + n1;
		n = n/2;
		i++;

	}
	int pad = i-l;
	printf("0 %d", n1);
	printf(" ");
	while(pad--) printf("0");
	printf("%d%s\n", s3, s2);
	return 0;

}
