#include <iostream>

using namespace std;

int main()
{
     int n,Petya, Vasya, Tonya,number=0;
     int team=Petya+Vasya+Tonya;

     cin>>n;

     while(n--){

        cin>>Petya>>Vasya>>Tonya;
        if( Petya+Vasya+Tonya>=2){
            number+=1;



        }


     }
     cout<<number<<endl;
    return 0;
}

