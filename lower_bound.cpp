
#include <iostream>

using namespace std;
int lowerBound(int arr[], int n, int x) {
	int low=0;
	int high=n-1;
	int ans=n;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]>=x){
			ans=mid;
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return ans;
}
int main(){
    int n;
    cout<<"entre sieze of array";
    cin>>n;
    int a[n];
    cout<<"entre elemts of array";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    cout<<"entre the element for lower bound";
    cin>>x;
    lowerBound( a,  n,  x);
}
