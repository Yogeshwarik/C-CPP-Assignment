void main()
{
	int arr[10],i,occu[10],j;
	clrscr();
	printf("Enter Number of elements 10");
	for(i=0;i<10;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<10;i++)
	{
	occu[i]=0;
		for(j=1;j<10;j++)
		{
			if(arr[i]==arr[j])
			{
				occu[i]++;
			}
		}
		if(occu[i]>1)
		{
			printf("Duplicate Element is %d and occurance is %d \n",arr[i],occu[i]);
		}
	}
	getch();
}
