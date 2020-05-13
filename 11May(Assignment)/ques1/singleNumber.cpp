#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> ar={1,2,3,1,4,2,3};
int i=0,p=0;
for(i;i<ar.size();i++)
	p = p^ar[i];
cout<<"The answer is "<<p<<endl;
}
