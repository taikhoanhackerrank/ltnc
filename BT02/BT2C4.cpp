#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; int q = 0;
    cin >>n;
    while (n > 0)
    {
        for (int k = 0; k <= q; k ++)
            cout << " ";
        for (int i = 1; i < 2*n; i++)
            cout << "*";
        //for (int k = 0; k <= q; k ++)
            //cout << " ";
        n -- ;
        q ++ ;
        cout << endl;
    }
    return 0;
}
