#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"Enter a no."<<endl;
    cin>>n;
    int r=0;
    int x=n;
    while(x>0)
    {
        r*=10;
        r+=x%10;
        x=x/10;
    }
        cout<<"Reverse of "<<n<<" is "<<r<<endl;
    
}