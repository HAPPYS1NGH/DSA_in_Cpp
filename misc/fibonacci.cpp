#include<iostream>
using namespace std;
void fibonacci(int x)
{
    int a=0,b=1,c;
    for(int i=1;i<=x;i++)
    {
        c=a+b;
        cout<<a<<endl;
        a=b;
        b=c;
    }
    }


int main(){
     int n;
    cout<<"Enter no. of terms"<<endl;
    cin>>n;
    fibonacci(n);
    
}