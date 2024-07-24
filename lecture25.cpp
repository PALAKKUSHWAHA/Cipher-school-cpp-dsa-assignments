#include <iostream>
using namespace std;
void minadmax(int *a, int *min , int *max)
{
	// What ever we change to *min , *max inside the function will get affected even outside the function
	int i;
	int small =a[0],large=a[0];
	for(i=1;i<6;i++)
	{
		if(a[i]>large)
		{
			large=a[i];
		}
		if(a[i]<small)
		{
			small=a[i];
		}
	}
}
int main()
{
	int a[5];
	int min,max;
	int i;
	for(i=0;i<6;i++)
	{
		a[i]=i;
		minadmax(a,&min,&max);
	}
	return 0;
}
