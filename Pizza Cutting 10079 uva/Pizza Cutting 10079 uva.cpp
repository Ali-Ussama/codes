#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	freopen("pizza","rt",stdin);
  long int cut,num,sum;
  while(cin>>cut){
  if(cut==1){
            cout<<"2"<<endl;
            }
  else if (cut==0){
            cout<<"1"<<endl;
            }
  else if(cut>=2){
       sum=2;
       for(num=2;num<=cut;num++){
           sum+=num;
           }
      cout<<sum<<endl;
           }
  else if(cut<0)
       break;

}
	return 0;
}
