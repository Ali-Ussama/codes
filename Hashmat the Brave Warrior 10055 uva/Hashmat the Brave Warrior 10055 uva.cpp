#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	freopen("hashmat","rt",stdin);
  long long s1,s2;
  while(cin>>s1){
  cin>>s2;
  if(s1<=s2){
  cout<<s2-s1<<endl;
}
   else if(s2<=s1){
cout<<s1-s2<<endl;
  }
}
	return 0;
}
