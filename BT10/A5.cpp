struct Point{
    int x, y;
    void print(){
        cout << &x << ' ' << &y << endl;
    }
};

int main(){
    Point Demo = {2, 3};
    Point cpyDemo = Demo;
    cout << "Demo      "; Demo.print();
    cout << "cpyDemo   "; cpyDemo.print();
    int arrayDemo[2];
    arrayDemo[0] = Demo.x;  arrayDemo[1] = Demo.y;
    cout << "arrayDemo " << &Demo.x << ' ' << &Demo.y;

    return 0;
}
