#include<bits/stdc++.h>
using namespace std;
int x[100], N, c[100], c1[100], c2[100];
void in() {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (j == x[i]) cout << " * ";
            else cout << " 0 ";
        }
        cout << endl;
    }
    cout << "_____________________________________________________" << endl;
}

bool check(int i, int j) {
    if (c[j] == false || c1[i - j + N -1] == false || c2[i + j - 2] == false)
        return false;
    return true;
}

void NQueen(int i) {
    for (int j = 1; j <= N; j++){
        if (check(i, j)) {
              //  cout << "check\n";
            x[i] = j;
            c[j] = c1[i - j + N -1] = c2[i + j - 2] = false;
            if (i == N)
                in();
            else
                NQueen(i + 1);
            c[j] = c1[i - j + N -1] = c2[i + j - 2] = true;
        }
    }
}
int main() {
    cin >> N;
    for (int i = 0; i < 100; i ++)
        c[i] = c1[i] = c2[i] = 1;
    NQueen(1);
    return 0;
}
