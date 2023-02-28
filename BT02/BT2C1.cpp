#include<bits/stdc++.h>
using namespace std;
//Số nguyên tố là số tự nhiên chỉ chia hết cho 1 và chính nó. Ngoài ra nó không chia hết cho bất cứ số nào khác. Số 0 và 1 không được coi là số nguyên tố
int snt(int a){
    if( a < 2) return 0;
    for (int i = 2; i <= sqrt(a) ; i++){
        if( a % i == 0) return 0;
    }
    return 1;
}
int main()
{
    int n;
    cin >> n;
    if(snt(n) == 0) cout << "no";
    else cout << "yes";
    return 0;
}
