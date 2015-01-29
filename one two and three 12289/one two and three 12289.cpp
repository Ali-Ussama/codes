#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main(){
	freopen("one","rt",stdin);
  long long T;
  string number;
  cin>>T;
  for(long long Cases=1;Cases<=T;Cases++){
         cin>>number;
         if(number.length()==3){
             if((number[0]=='o' && number[1]=='n'&&number[2]=='e')||(number[0]!='o' && number[1]=='n'&&number[2]=='e') || (number[0]=='o' && number[1]!='n'&&number[2]=='e') || (number[0]=='o' && number[1]=='n'&&number[2]!='e'))//number one
             cout<<"1";
             if((number[0]=='t' && number[1]=='w'&&number[2]=='o') ||(number[0]!='t' && number[1]=='w'&&number[2]=='o') || (number[0]=='t' && number[1]!='w'&&number[2]=='o') || (number[0]=='t' && number[1]=='w'&&number[2]!='o'))//number two
             cout<<"2";
             }
         else{
         if((number[0]!='t' && number[1]=='h'&&number[2]=='r'&&number[3]=='e'&&number[4]=='e') || (number[0]=='t' && number[1]!='h'&&number[2]=='r'&&number[3]=='e'&&number[4]=='e') ||
             (number[0]=='t' && number[1]=='h'&&number[2]!='r'&&number[3]=='e'&&number[4]=='e') || (number[0]=='t' && number[1]=='h'&&number[2]=='r'&&number[3]!='e'&&number[4]=='e')||
             (number[0]=='t' && number[1]=='h'&&number[2]=='r'&&number[3]=='e'&&number[4]!='e') || (number[0]=='t' && number[1]=='h'&&number[2]=='r'&&number[3]=='e'&&number[4]=='e'))//number two
             cout<<"3";
             }
          cout<<endl;
}
   return 0;
}
