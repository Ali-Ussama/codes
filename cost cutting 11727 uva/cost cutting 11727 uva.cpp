#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	freopen("costfile","rt",stdin);
    long long T,x,y,z;
	cin>>T;
	for(long long X=1; X<=T; X++){
		cin>>x>>y>>z;
		if((x>z && x<y) || (x<z && x>y))
		cout <<"Case "<<X<<": "<<x ;
		else if((y>z && y<x) || (y<z && y>x))
		cout <<"Case "<<X<<": "<<y ;
		else
        cout <<"Case "<<X<<": "<<z ;
		cout<<endl;
	}

	return 0;
}
