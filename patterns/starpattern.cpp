#include<iostream>
using namespace std;
int main(){
    int r=5;
    // cin>>r;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=r-i;j++)
        {
            cout<<" ";
        }
       
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=r;i>=1;i--)
    {
        for(int j=1;j<=r-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
}