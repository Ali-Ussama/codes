#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	freopen("Feynman","rt",stdin);
   long long K;
   while(cin>>K){
                 if(K==0)
                 break;
   long long sum=0;
    for(long x=K;x>=1;x--){
                      sum+=x*x;
                      }
                      cout<<sum<<endl;

    }
return 0;
}
