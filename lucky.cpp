#include<bits/stdc++.h>
using namespace std;
void solution(){
int ans=0;
int ans2=0;
string s;
cin>>s;
for(int i=0;i<3;i++){


   ans+=s[i]-'0';
}
for(int i=3;i<6;i++){

    ans2+=s[i]-'0';
}




    if(ans==ans2){

        cout<<"YES\n";

    }
    else{

        cout<<"NO\n";
    }


 cout<<endl;
}


int main(){
int t;
cin>>t;
while(t--){

    solution();
}
}
