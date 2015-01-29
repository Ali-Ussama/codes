#include<iostream>
#include <stdio.h>
using namespace std;
int main(){
	freopen("3n","rt",stdin);
	long long n,m;
	while(cin>>n>>m){

      long long res=0,count=1,final=0,sort;
	if(n>m){
	sort=n;
	n=m;
	m=sort;
	cout<<m<<" "<<n<<" ";
}
else
cout<<n<<" "<<m<<" ";
    for(long long j=m;j>=n;j--)
			{
	res=j;
	while(res!=1)
	{
		count++;
		if(res%2==0)
			res=res/2;
		else
			res=(3*res)+1;

		}
		if(count>final)
			final=count;
			count=1;
			}
	cout<<final<<endl;
}
	return 0;
}
/*
 * #include <iostream>
using namespace std;

int fcyclelength(int n)
{
	int cyclelength=0;
	a:
	cyclelength++;

	if(n==1)
	{
		return cyclelength;
	}
	if(n%2!=0)
	{
		n=(3*n+1);
	}
	else
	{
		n=n/2;
	}
	goto a;
	return 9;
}
int main()
{
int i=0,j=0;
while(cin >> i){
cin >> j;
cout << i <<" " << j <<" ";
int index=1;
if(i<j){
for(;i<=j ;i++ )
{
	if(fcyclelength(i)>index)
		index=fcyclelength(i);
}
}
else{
for(;j<=i ;j++ )
{
	if(fcyclelength(j)>index)
		index=fcyclelength(j);
}
}
cout <<index <<endl;
}

system("pause");
return 0;
}
 */
