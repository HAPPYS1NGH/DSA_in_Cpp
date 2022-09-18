#include <iostream>
using namespace std;
int factorial(int x)
{
    int f = 1;
    for (int i = 1; i <= x; i++)
    {
        f *= i;
    }
    return f;
}

int main()
{
    int n, r;
    cout << "Enter n and r " << endl;
    cin >> n >> r;
    cout << "nCr is " << (factorial(n) / (factorial(n - r) * factorial(r))) << endl;
}