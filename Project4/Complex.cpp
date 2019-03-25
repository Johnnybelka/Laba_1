#include "Complex.h"
#include <iostream>
using namespace std;


Complex slozh(Complex ch1, Complex ch2)
{
	Complex rr;
	rr.re = ch1.re + ch2.re;
	rr.im = ch1.im + ch2.im;
	return rr;
}

Complex umn(Complex ch1, Complex ch2)
{
	Complex rr;
	rr.re = ch1.re * ch2.re - ch1.im * ch2.im;
	rr.im = ch1.re * ch2.im + ch2.re * ch1.im;
	return rr;
}

Complex vich(Complex ch1, Complex ch2)
{
	Complex rr;
	rr.re = ch1.re - ch2.re;
	rr.im = ch1.im - ch2.im;
	return rr;
}

Complex del(Complex ch1, Complex ch2)
{
	Complex rr;
	rr.re = ((ch1.re * ch2.re) + (ch1.im * ch2.im)) / (pow(ch2.re, 2) + pow(ch2.im, 2));
	rr.im = ((ch1.im * ch2.re) - (ch1.re * ch2.im)) / (pow(ch2.re, 2) + pow(ch2.im, 2));
	return rr;
}