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
	for(int loop = 0; loop < l; loop++)
      printf("%d ", arr[loop]);
}
void ssort(int arr[],int n)
{
	int l = sizeof(arr)/sizeof(int);
	for (int i=0;i<l;i++)
	{
		swap_max(arr, l, i);
	}
}
