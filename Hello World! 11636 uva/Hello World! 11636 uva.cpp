#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	freopen("Hello","rt",stdin);
  long long Print,past = 1 , count = 0, x = 1 ;
  while(cin>>Print){
                    if(Print<0)break;
                    while( Print > past){
                        past *= 2;
                        count++;
                    }
   cout<<"Case "<<x<<": "<<count<<endl;
   x++;
}
   return 0;
}
