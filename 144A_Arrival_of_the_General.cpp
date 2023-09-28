#include <iostream>
using namespace std;
int main()
{
    int n, b;
    cin >> n >> b;
    int mina=b, maxa=b, mini=0, maxi=0;
    for (int i = 1; i < n; ++i)
    {
        int a;
        cin >> a;
        if (a > maxa)
        {
            maxa = a;
            maxi = i;
        }
        if (a <= mina)
        {
            mina = a;
            mini = i;
        }
    }
    cout << maxi + (n - 1 - mini) - (mini < maxi ? 1 : 0) << endl;
    return 0;
}