#include<bits/stdc++.h>
using namespace std;
int main()
{
int a;
cout<<"enter A: ";
cin>>a;
vector<vector<int>> arr(a,vector<int>(a,0));
int i,j;
for(i=0;i<arr.size();i++)
{
	arr[i][0] = 1;
}

for(i=1;i<arr.size();i++)
{
	for(j=1;j<arr.size();j++)
	{	if(i>=j)
		{
			if(i==j)
			{
				arr[i][j] = arr[i][j-1];
			}
			else
			{
				arr[i][j] = arr[i-1][j] + arr[i][j-1];
			}
		}
	}

}
cout<<"output is : "<<arr[a-1][a-1]<<endl;
return 0;
}
