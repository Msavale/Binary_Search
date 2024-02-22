#include <iostream>

using namespace std;
int upperBound(int arr[], int n, int x) {
   if(arr[n-1]<=x) return n;
   int low=0;
   int high=n-1;
   int temp=0;
   while(low<=high){
	   int mid=(low+high)/2;
	   if(arr[mid]<=x) low=mid+1;
	   else{
		   temp=mid;
		   high=mid-1;
	   }
   }
    return temp;

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
