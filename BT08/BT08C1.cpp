#include   <iostream>
#include  <vector>
#include  <string.h>

using namespace std;
int strlen(char a[])
{
    int n = 0;
    while(a[n] != '\0')
        n++;
    return n;
}
void reverse(char a[])
{
    int n = strlen(a);
    char* rv = new char[n];
    for(int i = 0; i < n; i++){
        rv[i] = a[n - i - 1];
    }
    for(int i = 0; i < n; i++){
        a[i] = rv[i];
    }
    delete[] rv;
}
void delete_char(char a[], char c)
{
    int  ptx = 0;
    int n = strlen(a);
    for(int i = 0; i < n; i++){
        if(a[i] != c){
            a[ptx] = a[i];
            ptx++;
        }
    }
    a[ptx] = '\0';
}
void pad_right(char a[], int n)
{
    int t = strlen(a);
    if(t < n){
        for( int i = t; i < n; i++){
            a[i] = ' ';
        }
    }else return;
}
void pad_left(char a[], int n)
{
    int t = strlen(a);
    if(t < n){
        char *x = new char [t + 1];
        for(int i = 0; i < t; i++){
            x[i] = a[i];
        }
        for(int i = 0 ;  i < n-t; i++){
            a[i] = ' ';
        }
        for( int i = n-t; i < n; i++){
            a[i] = x[i - n + t];
        }

        /*for(int i = 0; i < n -t; i++) a[i] = ' ';

        for(int i = 0; i < n; i++){
            if(i < n -t) a[i] = ' ';
            else a[i] = x[i - n + t];
        }

        a[n] = '\0';
        */
        delete[] x;
    }else return ;
}
void truncate(char a[], int n)
{
    int t = strlen(a);

    if(t < n) return;
    a[n] = '\0';

}
void trim_left(char a[])
{
    int t = strlen(a);
    t--;
    while(a[t] == ' '){
        a[t] = '\0';
        t--;
    }
}

void trim_right(char a[])
{
    int t = strlen(a);
    int tx = 0;
    for(int i = 0; i < t; i++){
        if(a[i] != ' ')
            break;
        else tx++;
    }
    for(int i = 0; i < t - tx; i++){
        a[i] = a[i + tx];
    }
    a[t - tx] = '\0';
}


int main()

{
    char s[] = "1230mimimi";
    cout << "s1: " << s << endl;
    cout << strlen(s) << endl;
    reverse(s);
    cout << "s2: " << s << endl;
    delete_char(s,'i');
    cout << "s3: " << s << "." << endl;
    /*pad_right(s, 15);
    cout << "s4: " << s << "." << endl;
    */
    pad_left(s, 15);
    cout << "s5: " << s << "." <<endl;
    truncate(s, 11);
    cout << "s6: " << s << "." <<endl;
    char d[] = "   laptrinhnangcao     ";
    trim_left(d);
    cout << d << endl;
    trim_right(d);
    cout << d << endl;

    return 0;


}
