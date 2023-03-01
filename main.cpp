#include <iostream>
#include "Myclass.h"
using namespace std;

int main(){
Myclass c;
c.setx(1);
cout<<c.getx()<<endl;
c.setx(2);
cout<<c.getx()<<endl;
}