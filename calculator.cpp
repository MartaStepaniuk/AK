//some changes
#include "calculator.h"
//operation Add
int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}
//operation Sub
int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}
//operation Mul
int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
//some changes