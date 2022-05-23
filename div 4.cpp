#include<bits/stdc++.h>
using namespace std;
int main(){
int n,r;
cin>>n;

for(int i=1;i<=n;i++){


    cin>>r;


    if(1900<=r){

        cout<<"Division 1\n";
    }
    if(1600<=r && r<=1899){

        cout<<"Division 2\n";
    }
    if(1400<=r && r<=1599){

        cout<<"Division 3\n";
    }
    if(r<=1399){

        cout<<"Division 4";


}
}


return 0;


}
