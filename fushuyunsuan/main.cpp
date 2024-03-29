//
//  main.cpp
//  fushuyunsuan
//
//  Created by 20141105044y on 15/11/25.
//  Copyright © 2015年 20141105044y. All rights reserved.
//


#include <iostream>
using namespace std;
class Complex
{public:
    Complex(){real=0;imag=0;}
    Complex(double r,double i){real=r;imag=i;}
    Complex operator+(Complex &c2);
    Complex operator+(int &i);
    friend Complex operator+(int&,Complex &);
    void display();
private:
    double real;
    double imag;
};

Complex Complex::operator+(Complex &c)
{return Complex(real+c.real,imag+c.imag);}

Complex Complex::operator+(int &i)
{return Complex(real+i,imag);}

void Complex::display()
{cout<<"{"<<real<<","<<imag<<"i)"<<endl;}

Complex operator+(int &i,Complex &c)
{return Complex(i+c.real,c.imag);}

int main()
{Complex c1(6,30),c2(-1,-10),c3;
    int i=5;
    c3=c1+c2;
    cout<<"c1+c2=";
    c3.display();
    c3=c1+i;
    cout<<"c1+i=";
    c3.display();
    return 0;

}
