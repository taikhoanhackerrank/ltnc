#include<bits/stdc++.h>
using namespace std;
char x[100];
int use[100], n, k;
void in() {
	for (int i = 1; i <= k; i++) {
			cout << char(x[i] + 'a' - 1);
	}
	cout << endl;
}
void hv(int i) {
	for (int j = 1; j <= n; j++) {

		if (use[j] == 0) {
            x[i] = j;
			use[j] = 1;
			if (i == k)
				in();
			else
				hv(i + 1);
            use[j] = 0;


		}                                          //  6 4
	}
}

int main() {
	cin >> n >> k;
	hv(1);
	return 0;
}
