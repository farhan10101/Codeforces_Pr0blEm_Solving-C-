#include<iostream>
#include<math.h>
using namespace std;



int main()
{
    int n1,n2;
    cout<<"Enter range\n:";
    cin>>n1>>n2;
    cout<<"Palindrom number:";
     for(int i=n1;i<n2;i++)
     {
         int n=i;
         int rev=0;

         while(n>0){


            int digit=n%10;
            rev=(rev*10)+digit;
            n=n/10;

         }
         if(rev==i){

            cout<<i<<"\n";
         }
     }
     return 0;
}

