#include<iostream>
using namespace std;
int main(){
    int r=9;
    // cin>>r;
        // int k=3;
        // for(int j=1;j<=9;j++)
        // {
        //     if(j==k){
        //     cout<<"*";
        //     k+=4;
        //     }
        //     else
        //     cout<<" ";
        // }
        // cout<<endl;
        // for(int j=1;j<=9;j++)
        // {
        //     if(j%2==0)
        //     cout<<"*";
        //     else
        //     cout<<" ";

        // }
        //      cout<<endl;
        // k=1;
        // for(int j=1;j<=9;j++)
        // {
        //     if(j==k){
                
        //     cout<<"*";
        //     k+=4;
        //     }
        //     else
        //     cout<<" ";

        // }
        //     cout<<endl;
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=r;j++)
        {
            if((i+j)%4==0||(i%2==0&&j%2==0)){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
        cout<<endl;
}
}