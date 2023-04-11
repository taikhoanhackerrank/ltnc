#include <bits/stdc++.h>

using namespace std;
int check(char x)
{
    if (x == '.') return 0;
    return 1;
}
int count_bomb(int i, int j)
{
    return check(arr[i - 1][j - 1]) + check(arr[i - 1][j]) + check(arr[i - 1][j + 1])
            + check(arr[i][j - 1]) + check(arr[i][j + 1])
            + check(arr[i + 1][j - 1]) + check(arr[i + 1][j]) + check(arr[i + 1][j + 1]);
}
void display(int N, int M)
{
    ff(i, 1, N)
    {
        ff(j, 1, M)
        {
            if (arr[i][j] == '*') cout << '*' << " ";
            else cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
}
void solve()
{
    int N, M; cin >> N >> M;
    ff(i, 1, N) ff(j, 1, M) cin >> arr[i][j];

    ff(i, 1, N)
    {
        ff(j, 1, M) ans[i][j] = count_bomb(i, j);
    }
    display(N, M);
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    ff(i, 0, MAXN - 1) ff(j, 0, MAXN - 1) arr[i][j] = '.', ans[i][j] = 0;
    solve();
    return 0;
}
