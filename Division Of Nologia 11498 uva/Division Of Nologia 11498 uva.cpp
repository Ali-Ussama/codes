#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	freopen("Division","rt",stdin);
   long long K,N,M,X,Y;
   while(cin>>K){
    if(K==0)
         break;
   cin>>N>>M;
 for(long long Case=1;Case<=K;Case++){
          cin>>X>>Y;
          if(Y>M && X>N)
                   cout<<"NE";
          else if(Y>M && X<N)
                    cout<<"NO";
          else if(Y<M&& X>N)
                    cout<<"SE";
          else if(Y<M && X<N)
                     cout<<"SO";
          else if(Y==M || X==N)
                     cout<<"divisa";
           cout<<endl;
                     }}
return 0;
}
