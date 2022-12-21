#include<iostream>
int binary(int arr[],int low,int high,int target);
using namespace std;
int main()
{int ans;
int arr[10]={1,2,3,4,5,6,7,8,9}	;
int low=1;
 int high=9;
 int target=4;
ans=binary(arr,low,high,target);
cout<<ans;
	
	return 0;	
}



int binary(int arr[],int low,int high,int target)
{

int mid;
while(low<=high)
{
	mid=(low+high)/2;
	
	if(target==arr[mid])
	{
		return mid;
	}
	
	 if(target<arr[mid])
	{
		high=mid-1;
	}
	
	 else
	{
		low=mid+1;
	}

}


	
}
