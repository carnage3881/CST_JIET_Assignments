#include<bits/stdc++.h>
using namespace std;
int main()
{
int A,B,C,c;
int LCM;
cout<<"A: ";cin>>A;
cout<<"B: ";cin>>B;
cout<<"C: ";cin>>C;
LCM = B*C;
c = A/LCM;
cout<<"Answer is "<<c<<endl;
return 0;
}
