#include <iostream>

using namespace std;
struct Point{
    int x, y;
    void print(){
        cout << x << ' ' << y << endl;
    }
};
void Thamtri(Point D){
    cout << &D.x << ' ' << &D.y << endl;
}
void Thambien(Point &D){
    cout << &D.x << ' ' << &D.y << endl;
}
int main(){
    Point Demo = {3, 4};
    cout << "Tham tri "; Thamtri(Demo);
    cout << "Tham bien "; Thambien(Demo);
    return 0;
}
