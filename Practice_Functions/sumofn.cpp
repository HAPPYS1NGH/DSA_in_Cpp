#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    return (n * (n + 1)) / 2;
}
int32_t main()
{
    int n;
    cin >> n;
    cout << "The sum is " << sum(n) << endl;
}