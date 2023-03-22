#include <iostream>

using namespace std;

struct Point{
    int x, y;
    void print(){
        cout << x << ' ' << y << endl;
    }
};
int main(){
    Point Demo = {2, 3};
    Demo.print();
    return 0;
}
