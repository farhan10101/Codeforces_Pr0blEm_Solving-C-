#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s[20];
    string s1[20];
    string s[20];
  getline(cin,s);
    string s1[20];
getline(cin,s1);

  string s[20];
  getline(cin,s);
    string s1[20];
getline(cin,s1);
    size_t found = s.find(s1);
    if (found != string::npos)
        cout << "Found" << found << endl;

char arr[20];
for(int i=0;i<20;i++){
    cin>>arr[i];
}
    found = s.find(arr, found+1);
    if (found != string::npos)
        cout << "Not found " << found << endl;

    return 0;
}






