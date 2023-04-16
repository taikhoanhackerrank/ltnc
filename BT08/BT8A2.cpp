#include<iostream>
using namespace std;
int main( )
{
   char a[4] = "abc";
   for (char *cp = a; (*cp) != '\0'; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }
   return 0;
}
/*
a.0x61fe14 : a
  0x61fe15 : b
  0x61fe16 : c
b.
int main( )
{
   int a[4] = {1,2,3};
   for (int *cp = a; (*cp) != '\0'; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }
   return 0;
}
=> 4bit
c.
int main( )
{
   double a[4] = {1.2,2.8,3.3};
   for (double *cp = a; (*cp) != '\0'; cp+=2) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }
   return 0;
}
=> 8bit
d.

*/



