#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

int main()
{
   freopen("above","rt",stdin);
	int n , arr[1000];
   double av ,result, sum ,count,x;
   cin>>n;
   for(int i=0 ; i<n ; i++)
   {
       cin>>x;
       sum=0;
       count=0;
       av=0;
       for(int j=0 ; j<x ; j++)
       {
           cin>>arr[j];
           sum=sum+arr[j];
       }
       av=sum/x;
       for(int k=0 ; k<x ; k++)
       {
           if(arr[k]>av)
                count++;
       }
       result=(count*100)/x ;
       cout<<fixed<<setprecision(3)<<result<<"%"<<endl;

   }
   return 0;
}
