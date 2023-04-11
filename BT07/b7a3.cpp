#include<iostream>
using namespace std;

int count_even(int* a, int n){
    int dem = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        dem++;
    }
    return dem;
}

int main()
{
    int len;
    cin >> len;
    int *a = new int[len];

    for (int i = 0; i <len; i++)
    {
        cin >> a[i];
    }
    cout << count_even(a, len) << endl;
    cout << count_even(a, 5) << endl;
    return 0;
}
