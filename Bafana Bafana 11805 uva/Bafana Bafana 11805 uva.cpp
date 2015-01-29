#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	freopen("bafanafile","rt",stdin);
long int T,N,K,P;
cin>>T;
for(int loop=0;loop<T;loop++){
            cin>>N>>K>>P;
if(2<=N && 1<=K && K<=N){
for(int x=0;x<P;x++){
        if(K==N && x!=P){
                 K=0;
                 }
                 K++;

                 }
        cout<<"Case "<<loop+1<<": "<<K<<endl;
}
        }
return 0;
}
