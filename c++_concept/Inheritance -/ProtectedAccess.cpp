#include <iostream>
using namespace std;

class Base
{
protected: //private variable which can be inherit
    int a;

private:
    int b;
};

/*for a protected member: 

      1.private member  
      2.protected member
      3.public member

*/
class Derived : Base
{
};
int main()
{

    return 0;
}