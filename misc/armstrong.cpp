#include<iostream>
#include<cmath>
using namespace std;
int main(){
     int n;
    cout<<"Enter a no."<<endl;
    cin>>n;
    int s=0;
    int x=n;
    while(x>0)
    {
        int ld=x%10;
        s+=round(pow(ld,3));
        x=x/10;
    }
    if(s==n)
        cout<<"Its Armstrong No. "<<n<<endl;
        else
            cout<<"It is Not an Armstrong No. "<<n<<endl;

    
}