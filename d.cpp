#include <iostream>

#include <algorithm>
using namespace std;
int cal(int *arr,int a)
{
	int cnt=0;
	int ans=0;
	for(int k=0;k<a;k++)
	{
		for(int i=1;i<(arr[0]+1);i++)
		{
			for(int j=0;j<a-k;j++)
			{
				if (arr[j+k]>=i+j)
					cnt++;
				else
					break;
			}
			if (cnt>ans)
				ans=cnt;
			cnt=0;
		}
	}
	return ans;

}
int main(){
	int n;
	int arr[10]={0,};
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		for(int j=0;j<a;j++)
		{
			cin>>arr[j];
		}
		sort(arr,arr+a);
		cout<<"Case #"<<i+1<<": "<<cal(arr,a)<<endl;
	}
}
