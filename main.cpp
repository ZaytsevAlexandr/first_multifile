#include <iostream>
using namespace std;

#include "add.hpp"

int main ( )
{
int x, y;
cout << "x, y: ";
cin >> x >> y;
cout << endl;
cout << "The sum of x and y is: " << add ( x , y ) << endl;
return 0 ;
}

