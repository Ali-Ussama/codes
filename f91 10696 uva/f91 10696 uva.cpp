#include <iostream>
#include <stdio.h>
using namespace std;
long long F(long long N){
     if(N<=100)
     return F(F(N+11));
     else if(N>=101)
      return N-10;
}
int main(){
	freopen("f91","rt",stdin);
  long long N;
  while(cin>>N){
                    if(N==0)
                    break;
                    else
                    cout<<"f91("<<N<<") = ";
                    cout<<F(N)<<endl;

}
   return 0;
}
