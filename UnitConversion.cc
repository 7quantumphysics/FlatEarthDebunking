#include "UnitConversion.h"
#include <cmath>

MeterConversion::MeterConversion(){}
double MeterConversion::Inches(double& input)
{
	double output = 39.37*input;
	return output; // converts input to inches
}
		
double MeterConversion::Feet(double& input)
{
	double output = 3.281*input;
	return output; // converts input to feet
}
		
double MeterConversion::Yards(double& input)
{
	double output = 1.094*input;
	return output; // converts input to yards
}
		
double MeterConversion::Miles(double& input)
{
	double output = 6.214*pow(10,-4)*input;
	return output; // converts input to miles
}
		
double MeterConversion::Kilometers(double& input)
{
	double output = 1.000*pow(10,-3)*input;
	return output; // converts input to kilometers
}

//---------------------------------------------------------------------

InchConversion::InchConversion(){}
double InchConversion::Meters(double& input)
{
	double output = 0.0254*input;
	return output; // converts input to meters
}
		
double InchConversion::Feet(double& input)
{
	double output = 0.0833*input;
	return output; // converts input to feet
}
		
double InchConversion::Yards(double& input)
{
	double output = 0.02778*input;
	return output; // converts input to yards
}
		
double InchConversion::Miles(double& input)
{
	double output = 1.578*pow(10,-5)*input;
	return output; // converts input to miles
}
		
double InchConversion::Kilometers(double& input)
{
	double output = 2.54*pow(10,-5)*input;
	return output; // converts input to kilometers
}

//---------------------------------------------------------------------

FeetConversion::FeetConversion(){}
double FeetConversion::Meters(double& input)
{
	double output = 0.3048*input;
	return output; // converts input to meters
}
		
double FeetConversion::Inches(double& input)
{
	double output = 12.00*input;
	return output; // converts input to inches
}
		
double FeetConversion::Yards(double& input)
{
	double output = 0.3333*input;
	return output; // converts input to yards
}
		
double FeetConversion::Miles(double& input)
{
	double output = 1.894*pow(10,-4)*input;
	return output; // converts input to miles
}
		
double FeetConversion::Kilometers(double& input)
{
	double output = 3.048*pow(10,-4)*input;
	return output; // converts input to kilometers
}

//---------------------------------------------------------------------

YardConversion::YardConversion(){}
double YardConversion::Meters(double& input)
{
	double output = 0.9144*input;
	return output; // converts input to meters
}
		
double YardConversion::Inches(double& input)
{
	double output = 36.00*input;
	return output; // converts input to inches
}
		
double YardConversion::Feet(double& input)
{
	double output = 3.00*input;
	return output; // converts input to feet
}
		
double YardConversion::Miles(double& input)
{
	double output = 5.682*pow(10,-4)*input;
	return output; // converts input to miles
}
		
double YardConversion::Kilometers(double& input)
{
	double output = 9.144*pow(10,-4)*input;
	return output; // converts input to kilometers
}

//---------------------------------------------------------------------

MileConversion::MileConversion(){}
double MileConversion::Meters(double& input)
{
	double output = 1609.0*input;
	return output; // converts input to meters
}
		
double MileConversion::Inches(double& input)
{
	double output = 63360.0*input;
	return output; // converts input to inches
}
		
double MileConversion::Feet(double& input)
{
	double output = 5280.0*input;
	return output; // converts input to feet
}
		
double MileConversion::Yards(double& input)
{
	double output = 1760.0*pow(10,-4)*input;
	return output; // converts input to yards
}
		
double MileConversion::Kilometers(double& input)
{
	double output = 1.609*pow(10,-4)*input;
	return output; // converts input to kilometers
}

//---------------------------------------------------------------------

KilometerConversion::KilometerConversion(){}
double KilometerConversion::Meters(double& input)
{
	double output = 1000.00*input;
	return output; // converts input to meters
}
		
double KilometerConversion::Inches(double& input)
{
	double output = 39370.0*input;
	return output; // converts input to inches
}
		
double KilometerConversion::Feet(double& input)
{
	double output = 3281.0*input;
	return output; // converts input to feet
}
		
double KilometerConversion::Yards(double& input)
{
	double output = 1094.0*pow(10,-4)*input;
	return output; // converts input to yards
}
		
double KilometerConversion::Miles(double& input)
{
	double output = 0.6214*pow(10,-4)*input;
	return output; // converts input to miles
}

//---------------------------------------------------------------------

double RadianToDegree(double radian)
{
	double angle = (180.0/M_PI)*radian;
	return angle;
}
