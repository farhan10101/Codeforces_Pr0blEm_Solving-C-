#include<bits/stdc++.h>
using namespace std;

void quadrent(int x ,int y)
{


    if(x>0 && y>0)
    {

        cout<<"1st quadrant";

    }
    else if(x<0 && y>0){

        cout<<"2nd quadrant";

    }
    else if(x<0 && y<0){

        cout<<"3rd quadrant";
    }
    else if(x>0 && y<0){

        cout<<"4th quadrant";
    }
    else{

        cout<<"not found";

    }



}

int main()
{
int x=2,y=-1;
quadrent(x,y);


    return 0;
}

