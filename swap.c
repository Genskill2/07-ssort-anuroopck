void swap_max(int arr[], int l,int n)
{
	int max=0, *p;
	for(int i=n; i<l; i++)
	{
		if (arr[i]>max)
		{
			p = &arr[i];
			max = arr[i];
		}
	}
	*p = arr[n];
	arr[n] = max;
}
void ssort(int arr[],int l)
{
	for (int i=0;i<l;i++)
	{
		swap_max(arr, l, i);
	}
}
