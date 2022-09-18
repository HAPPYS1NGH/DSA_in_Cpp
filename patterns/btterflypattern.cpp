#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter the val"<<endl;
    cin>>r;
      for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=2*r;j++){
           if(j<=i||j>2*r-i) 
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    // }
    //   for(int i=1;i<=r;i++)
    // {
    //     for(int j=r;j>=i;j--){
    //         cout<<"*";
    //         }
    //         for(int j=r-i+1;j<r+i-1;j++)
    //         {
    //             cout<<" ";
    //         }
    //         for(int j=2*r;j>r+i-1;j--)
    //         {
    //             cout<<"*";
    //         }
    //     cout<<endl;
    // }
     for(int i=r;i>=1;i--)
    {
        for(int j=1;j<=2*r;j++){
           if(j<=i||j>2*r-i) 
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    

}}