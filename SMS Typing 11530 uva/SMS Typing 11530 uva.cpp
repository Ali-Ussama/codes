#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	freopen("SMS","rt",stdin);
	char bigOne[6][3]={{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'},{'t','u','v'}},
		smallOne[2][4]={{'p','q','r','s'},{'w','x','y','z'}};
	string line;
	long long T;
	cin>>T;
	cin.ignore();
	for(long long x=1;x<=T;x++){// loop of test cases
		getline(cin,line);
		long long count=0;
	for(long long check=0;check<line.length();check++){// loop check the position of all letters
	for(int row=0;row<6;row++){// loop check the position of each letter of buttons 2 3 4 5 6 8
		for(int column=0;column<3;column++){
			if(line[check]==bigOne[row][column]){// condition check the position of letters
				count+=column+1;
				break;
			}
		}
	}
	for(int row=0;row<2;row++){// loop check the position of each letter of buttons 7 9
		for(int column=0;column<4;column++){
			if(line[check]==smallOne[row][column]){
				count+=column+1;
				break;
			}
		}
	}
	if(line[check]==' '){// Space button
		count++;
	}


}
cout<<"Case #"<<x<<": "<<count<<endl;
}
	return 0;
}
