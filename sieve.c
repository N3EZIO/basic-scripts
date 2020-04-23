#include<stdio.h>
int main()
{
	int A[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int a=20;
	int p_pos=1;
	int p=2;

	while(p*p <= a)
	{
		int i=2;
		while(i*p - 1 <= a)
		{
			A[i*p - 1]=-1;
			i=i+1;
		}
		p_pos=p_pos+1;
		while(A[p_pos]==-1 && A[p_pos]<a)
		{
			p_pos=p_pos+1;
		}
		p=A[p_pos];
	}

	for(int j=0;j<20;j++)
	{
		printf("%d \n",A[j]);
	}

	return 0;
}

