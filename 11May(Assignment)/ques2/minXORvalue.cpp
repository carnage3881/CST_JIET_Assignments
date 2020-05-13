#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,p,n=5;
vector<int> arr={1,5,2,4,7};
int min = INT_MAX;
sort(arr.begin(),arr.end());
for(i=1;i<arr.size();i++)
{	p = arr[i]^arr[i-1];
	if (min > p)
		min = p;

}
cout<<"Minimum XOR Value:"<<min<<endl;
return 0;
}
