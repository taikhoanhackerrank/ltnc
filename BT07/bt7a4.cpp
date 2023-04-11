#include<iostream>
using namespace std;

int BinarySearch(int *a, int l, int r, int x)
{
    int mid = (l + r)/2;
    if(*(a+mid) > x)
        return BinarySearch(a,l,mid-1,x);
    else if(*(a+mid) < x)
        return BinarySearch(a,mid + 1, r, x);
    else return mid;
}
int main()
{
    int n;
    cin>>n;
    int *a = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin>> a[i];
    }
    int t;
    cin >> t;
    cout<<BinarySearch(a,0,n-1,t);

}
