#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter the no"<<endl;
    cin>>r;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=r-i;j++){
            cout<<" ";
        }
        for(int j=r-i+1;j<=r;j++){
            cout<<"*";
        }
        cout<<endl;

    }
}