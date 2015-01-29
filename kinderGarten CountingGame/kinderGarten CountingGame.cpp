#include <iostream>
#include <string>
#include <ctype.h>
#include <stdio.h>
using namespace std;
int main(){
string Name;
long long size;
freopen("Gamefile","rt",stdin);
while(getline(cin,Name)){
long long count=0;
size=Name.length();
for(long long x=0;x<size;x++){
                if((isupper(Name[x]) || islower(Name[x])) && (!isupper(Name[x+1])&&
                !islower(Name[x+1]))){
                count++;
                }
        }
cout<<count<<endl;
                             }

    return 0;
}
