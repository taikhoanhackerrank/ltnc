#include <bits/stdc++.h>

using namespace std;

const long long MAXN = 12;

int arr[MAXN][MAXN];

int bomb(int i, int j)
{
    return (arr[i - 1][j - 1] + arr[i - 1][j] + arr[i - 1][j + 1])
        + (arr[i][j - 1] + arr[i][j + 1])
        + (arr[i + 1][j - 1] + arr[i + 1][j] + arr[i + 1][j + 1]);
}
void display(int N, int M)
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            if (arr[i][j] == 1) cout << "* ";
            else cout << bomb(i, j) << " ";
        }
        cout << "\n";
    }
}
void solve()
{
    int N, M; cin >> N >> M;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            char x; cin >> x;

            if (x == '.') arr[i][j] = 0;
            else arr[i][j] = 1;
        }
    }

    display(N, M);
}

int main()
{
    // ios_base::sync_with_stdio(false); cin.tie(0);
    // freopen("X.inp", "r", stdin);
    // freopen("Y.out", "w", stdout);
    solve();
    return 0;
}