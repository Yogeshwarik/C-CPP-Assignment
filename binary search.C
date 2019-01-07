#include<stdio.h>
int binary(int a[],int n,int key)
{
	int mid,low=0,high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==key)
		   return mid;
		if(key<a[mid])
		   high=mid-1;
		   else
		   low=mid+1;
	}
	return -1;
}
void main()
{
	int a[]={1,2,3,4,5,6,7,8};
	int i,m=sizeof(a)/sizeof(int),key=8,res;
	clrscr();
	res=binary(a,m,key);
	if(res==1)
	printf("element not found\n");
	else
	printf("element foundfound at pos %d",res);
	getch();
}


