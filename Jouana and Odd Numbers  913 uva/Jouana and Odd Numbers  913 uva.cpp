#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main(){
	freopen("jouana","rt",stdin);
   long long N,c;
   while(cin>>N){
	   c=1;
   long long Sum=0;
   while(c<=N){
               Sum+=c;
               c+=2;
               }
   long long sum=0;
   Sum=(Sum*2)-1;
   for(int x=1;x<=3;x++){
   sum+=Sum;
   Sum-=2;
}
cout<<sum<<endl;
   }
return 0;
}
