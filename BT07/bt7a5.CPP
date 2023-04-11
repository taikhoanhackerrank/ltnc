#include<iostream>
using namespace std;

char* weird_string()
{
   char c[] = "123345";
   return c;
}

int main(){
    cout <<  weird_string() << endl;

    return 0;
}
/*
In function 'char* weird_string()':
warning: address of local variable 'c' returned [-Wreturn-local-addr]|
*/
