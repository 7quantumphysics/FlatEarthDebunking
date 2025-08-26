#ifndef UNITCONVERSION_
#define UNITCONVERSION_

/*  All other functions are self explanatory */

class MeterConversion
{
	public:
		MeterConversion();
	
		double Inches(double& input); // Converts meters to inches
		double Feet(double& input);	// Converts meters to feet
		double Yards(double& input); // Converts meters to yards
		double Miles(double& input); // Converts meters to miles
		double Kilometers(double& input); // Converts meters to kilometers
};

class InchConversion
{		
	public:
		InchConversion();
		
		double Meters(double& input);
		double Feet(double& input);
		double Yards(double& input);
		double Miles(double& input);
		double Kilometers(double& input);
};

class FeetConversion
{		
	public:
		FeetConversion();
		
		double Meters(double& input);
		double Inches(double& input);
		double Yards(double& input);
		double Miles(double& input);
		double Kilometers(double& input);
};

class YardConversion
{		
	public:
		YardConversion();
		
		double Meters(double& input);
		double Inches(double& input);
		double Feet(double& input);
		double Miles(double& input);
		double Kilometers(double& input);
};

class MileConversion
{		
	public:
		MileConversion();
		
		double Meters(double& input);
		double Inches(double& input);
		double Feet(double& input);
		double Yards(double& input);
		double Kilometers(double& input);
};

class KilometerConversion
{		
	public:
		KilometerConversion();
		
		double Meters(double& input);
		double Inches(double& input);
		double Feet(double& input);
		double Yards(double& input);
		double Miles(double& input);
};

double RadianToDegree(double radian);

#endif
