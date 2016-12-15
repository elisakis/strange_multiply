#include <iostream>

using namespace std;

int strange_multiply (int n, int m)
{
    if (n == 0 || m == 0)
        return 0;

    if (m % 2 == 0)
    {
        int i = strange_multiply(n, m/2);
        return i + i;
    }
    else
        return strange_multiply(n, m - 1) + n;
}

int main()
{
    int n, m;
    cin >> n >> m;

    cout << strange_multiply(n, m);
}
