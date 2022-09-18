#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no.";
    cin>>n;
    bool f=0;
    for(int i=2;i<= sqrt(n);i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==0)
    {
        cout<<"Prime "<<n<<endl;
    }
    else
    cout<<" Not Prime "<<n<<endl;
}