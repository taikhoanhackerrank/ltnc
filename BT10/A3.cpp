#include <iostream>

using namespace std;
struct Point{
    const int x, y;
    void print(){
        cout << x << ' ' << y << endl;
    };
    double mid_point(){
        return 1.0*(x + y)/2;
    }
};
int main(){
    Point Demo = {2, 3};
    Demo.print();
    cout << Demo.mid_point();
    return 0;
}
