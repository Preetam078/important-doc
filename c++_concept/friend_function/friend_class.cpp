#include <iostream>
using namespace std;
//forward declaration
class Complex;
class Calculator
{
public:
    int realsum(Complex, Complex);
    int imgsum(Complex, Complex);
};

class Complex
{
private:
    int a;
    int b;
    //friend int Calculator::realsum(Complex,Complex);//friend function for a particular function in the
    //class
    //friend int Calculator::imgsum(Complex,Complex);
    friend class Calculator; //friend class declaration
public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void view(void)
    {
        cout << "the complex number is : " << a << "+i" << b << endl;
    }
};
int Calculator::realsum(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator::imgsum(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex c1, c2;
    c1.setdata(1, 2);
    c1.view();
    c2.setdata(1, 2);
    c2.view();
    Calculator calc;
    int x = calc.realsum(c1, c2);
    cout << "the sum of the real numbers : " << x << endl;
    int y = calc.imgsum(c1, c2);
    cout << "the sum of the imaginary numbers : " << y << endl;
    return 0;
}