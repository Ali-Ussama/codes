#include <iostream>
#include <stdio.h>
using namespace std;
long long sum(long long number){
	long long Sum=0;
    while(number>0){
		Sum+=number%10;
		number/=10;
		}
	return Sum;
}
int main() {
	freopen("SumDigitFile","rt",stdin);
	long long num;
        while(cin>>num){
   if(num==0){
                break;
                }
	while(num>=10){
                       num=sum(num);
                      }
	cout<<num<<endl;
	}

	return 0;
}
