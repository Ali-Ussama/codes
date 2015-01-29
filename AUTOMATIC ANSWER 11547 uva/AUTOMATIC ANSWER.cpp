#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main(){
	freopen("answerfile","rt",stdin);
    long int cases,num,sum=0;
    cin>>cases;
    for(int x=0;x<cases;x++){
            cin>>num;
    sum=((((((num*567)/9)+7492)*235)/47)-498);
	cout<<abs((sum%100)/10)<<endl;
}
	return 0;
}
