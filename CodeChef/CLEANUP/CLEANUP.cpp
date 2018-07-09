// Andrew Cash
// https://www.codechef.com/problems/CLEANUP

#include <iostream>
using namespace std;

void cleanup()
{
    int m, n;
    cin >> n >> m;

    bool completed[n];

    for (int i=0; i < m; i++)
    {
        int j;
        cin >> j;
        completed[j] = true;
    }
}

int main()
{
    int testcase;
    cin >> testcase;

    for (int i=0; i<testcase; i++)
    {
        cleanup();    
    }
    return 0;
}
