#include<iostream>
using namespace std;
void printSize(int array[])
{
    cout << sizeof(array)<< endl;
}
int main()
{
    int array[4] = {5, 4 ,3 , 2};
    cout << sizeof(array)<< endl;
    printSize(array);//  sizeof đối với mảng từ bên trong hàm printSize < bên ngoài - nơi khai báo mảng .

    return 0;
}

