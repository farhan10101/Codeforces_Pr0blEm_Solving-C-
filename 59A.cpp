#include<bits/stdc++.h>
using namespace std;
int main(){
int up=0,lo=0;
string s;
cin>>s;
for(int i=0;i<s.size();i++){

     if(isupper(s[i]))
        {
        up++;

     }
     if(islower(s[i])){

        lo++;
     }
}
     if(up<lo){
            char ch;
     for(int i=0;i<s.size();i++){
        ch=tolower(s[i]);
        cout<<ch;
     }
     }
     else if(up>lo){

        char ch;
        for(int i=0;i<s.size();i++){

            ch=toupper(s[i]);
            cout<<ch;

        }
     }
     else{
    char ch;
        for(int i=0;i<s.size();i++){
        ch=tolower(s[i]);
        cout<<ch;

     }
}









}
