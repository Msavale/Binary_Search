pair<int, int> getFloorAndCeil(vector<int> &arr, int n, int x) {
	int l=0;
	int h=n-1;
	int f=-1,c=-1;
	int mid;

	if(arr[0]>x)
	 return make_pair(-1,arr[0]);
	if(arr[n-1]<x)
	 return make_pair(arr[n-1],-1);
	
	while(l<=h)
	{
		mid = l+(h-l)/2;

		if(arr[mid]<=x)
		{
			f=mid;
			l=mid+1;
		}
		else{
			h=mid-1;
		}
	}
	if(arr[f]==x)
	{
		return make_pair(arr[f],arr[f]);
	}
	c=f+1;
	return make_pair(arr[f],arr[c]);
	


}
