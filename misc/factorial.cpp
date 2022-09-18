#include <iostream>
using namespace std;
void factorial(int x)
{
    int f = 1;
    for (int i = 1; i <= x; i++)
    {
        f *= i;
    }
    cout << "Factorial of " << x << " is " << f << endl;
}

int main()
{
    int n;
    cout << "Enter no. " << endl;
    cin >> n;
    factorial(n);
}