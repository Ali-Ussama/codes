#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;
int main(){
	freopen("oddfile","rt",stdin);
    long int cases,num1,num2,sum;
    cin>>cases;
    for(int x=0;x<cases;x++){
            cin>>num1>>num2;
            sum=0;
	while(num1<=num2){
                     if(num1%2!=0){
                                  sum+=num1;
                                  }
                     num1++;
                     }
cout<<"Case "<<x+1<<": "<<sum<<endl;
}
return 0;
}
