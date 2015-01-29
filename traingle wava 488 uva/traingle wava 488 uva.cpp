#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	freopen("traingle","rt",stdin);
  long T,amplitude,frequency;
  cin>>T;
  for(long long Cases=1;Cases<=T;Cases++){
           cin>>amplitude;
           cin>>frequency;
           for(long long total=1;total<=frequency;total++){
                    for(long long row=1;row<=amplitude;row++){
                             for(long long column=1;column<=row;column++){
                                      cout<<row;
                                      }
                                      cout<<endl;
                                      }
                    for(long long row=amplitude-1;row>0;row--){
                             for(long long column=1;column<=row;column++){
                                      cout<<row;
                                      }
                                      cout<<endl;
                                      }
 if(total!=frequency)
 cout<<endl;
}
if(Cases!=T)
cout<<endl;
}
   return 0;
}
