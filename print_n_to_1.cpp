// printing N to 1

#include <bits/stdc++.h>
using namespace std;
void f(int n, int i)
{
    if (n < i)
    {
        return;
    }

    cout << n << endl;
    f(n - 1, i);
}

int main()
{
    int n;
    cin >> n;
    f(n, 1);
}
