#include<iostream>
using namespace std;
int main(){
    int r=5;
    // cin>>r;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<(i-j+1)%2;

        }
        cout<<endl;
    }
}