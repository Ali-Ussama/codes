#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;
int main(){
	freopen("Egyptfile","rt",stdin);
	long int length,width,diameter;

while(cin>>length){
                   cin>>width>>diameter;
if(diameter==0 && length==0 && width==0)
                                       break;
if((diameter*diameter)==(length*length)+(width*width)){
                                      cout<<"right\n";
                                      }
else if((length*length)==(diameter*diameter)+(width*width)){
                                      cout<<"right\n";
                                      }
else if((width*width)==(diameter*diameter)+(length*length)){
                                      cout<<"right\n";
                                      }
else
                                      cout<<"wrong\n";

                                      }
	return 0;
}
