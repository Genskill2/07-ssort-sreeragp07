void swap_max(int arr[], int l, int n)
{
	int max=arr[n];
	int pos,temp,flag=0;
	for(int i=n+1;i<l;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
			pos=i;
			flag=1;
		}
	}
	if(flag==1)
	{
		temp=arr[n];
		arr[n]=max;
		arr[pos]=temp;
	}
}

void ssort(int arr[], int l)
{
	for(int i=0;i<l;i++)
	{
		swap_max(arr,l,i);
	}
}
