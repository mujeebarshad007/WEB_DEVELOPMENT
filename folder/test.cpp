#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int t;
    cin >> t;
    char a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    while (t--)
    {
        if (int(a) + int(b) + int(c) == int(d) + int(e) + int(f))
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << "\n";
    }
    return 0;
}