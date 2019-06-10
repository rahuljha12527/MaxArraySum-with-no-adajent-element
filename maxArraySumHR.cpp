#include<iostream>

using namespace std;

int FindMaxSum(int arr[],int n)
{
	int inc1=arr[0];
	int excl=0;
	int excl_new;
	int i;

	for(i=1;i<n;i++)
	{
		excl_new=(inc1>excl)? inc1:excl;

		inc1=excl+arr[i];
		excl=excl_new;
	}

	return ((inc1>excl)? inc1:excl);
}

int main(){
	int t;
	cin>>t;
	int a[t];
	for(int i=0;i<t;i++){
		cin>>a[i];
	}

	int res=FindMaxSum(a,t);

	cout << res << "\n";
}