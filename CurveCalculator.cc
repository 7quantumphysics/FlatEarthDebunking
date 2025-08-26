#include "CurveCalculator.h"
#include <iostream>
#include <cmath>

using namespace std;

CurveCalculator::CurveCalculator() // Constructor
{ 
	R_ = 6.371*pow(10,6);
	h0_ = 1.00;
	D_ = Solve_S(); 
} 
//-----------------------------------------------------------------------
void CurveCalculator::setHeight(double& h)
{ 
	h0_ = h; 
}
void CurveCalculator::setDistance(double& d)
{ 
	D_ = d; 
}
void CurveCalculator::setRadius(double& r)
{ 
	R_ = r; 
}
//-----------------------------------------------------------------------
double CurveCalculator::Solve_S()
{
	S_ = R_*acos( 1.0/(1.0+h0_/R_) );
	return S_;
}
double CurveCalculator::Solve_H()
{
	H_ = R_/cos( (D_-S_)/R_ ) - R_;
	return H_;
}
double CurveCalculator::Solve_d0()
{
	d0_ = sqrt( h0_*h0_ + 2.0*R_*h0_ );
	return d0_;
}
double CurveCalculator::Solve_Alpha()
{
	Psi_ = asin( 1.0/(1.0+h0_/R_) );
	Alpha_ = M_PI/2.0 - Psi_;
	return Alpha_;
}		
//-----------------------------------------------------------------------		
		
