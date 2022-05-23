//#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main(){
int n,k ;
string s;

cin>>n>>s;
k=s.size();
long long fact=n;



 while(n>k){
     n=n-k;
    fact=fact*n;

    cout<<n<<" ";
 }

 cout<<endl<<fact<<endl;
 return 0;


}

/*#include<bits/stdc++.h>

#define sf scanf
#define pf printf

using namespace std;



   int main()
{

   int n,l,ans=1;

   string x;

   cin>>n>>x;

   l=x.size();

   while(n>1)

   {
       ans=ans*n;
       n=n-l;
       cout<<n<<" ";
   }
    cout<<endl<<ans<<endl;
    return 0;
}*/
