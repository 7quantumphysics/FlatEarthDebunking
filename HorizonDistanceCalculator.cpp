/*
	Programmer: AC Malik Williams　マリく・ウィリアマス
	Date: 7/13/19 二千十九年七月十三日
	Code: Takes in the height of an observer and the distance away from an observer, both input by the user, 
	      and calculates the distance to the horizon, the minimum height of object needed to be seen by the 
	      observer at the given distance away and the angle which the observer must tilt their gaze down 
	      (from looking straight ahead of them with their gaze, or line of sight, parallel with their feet).
*/

#include "CurveCalculator.h"
#include "UnitConversion.h"
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
        // DECLARE CLASS OBJECTS //
	
	CurveCalculator CCO; // "CCO" for "Curve Calculator Object" 
	
	MeterConversion MetersTo; // i.e. MeterConversion::Inches() -> MetersTo.Inches()
	InchConversion InchesTo;
	FeetConversion FeetTo;
	YardConversion YardsTo;
	MileConversion MilesTo;
	KilometerConversion KilometersTo;
	
	// DECLARE VARIABLES FOR THE USER'S INPUT //
	
	double height;
	double distance;
	
	// RADIUS OF THE SPHERE IN QUESTION //
	
	//double radius = 1.00; // measured in meters
	
	// BEGIN MAIN PROGRAM //
	
	string height_unit;
	string distance_unit;
	string Height_unit;
	string Distance_unit;
	
	cout << endl
	     << endl << "/**********************************************************************/"
	     << endl << "\t Curvature Calculator"
	     << endl << "\t --------------------------------------------------- "
	     << endl << "\t\t for meters type 'm' "
	     << endl << "\t\t for inches type 'in' "
	     << endl << "\t\t for feet type 'ft' "
	     << endl << "\t\t for yards type 'yd' "
	     << endl << "\t\t for miles type 'mi' "
	     << endl << "\t\t for kilometers type 'km' "
	     << endl << "\t --------------------------------------------------- "
	     << endl << "\t You will be asked to enter in your height (height of your eyes above the surface of the Earth) "
	     << endl << "\t and the distance along the ground to a structure which you wish to look at."
	     << endl << "\t Before being asked to enter in the numbers, please specify which units of measurement you used to "
	     << endl << "\t measure your height and the distance to the object."
	     << endl << "/**********************************************************************/" << endl;
	
	while(true)
	{
		cout << endl << "Which units were used to measure your height: ";
		cin >> height_unit;  
		if( height_unit=="m"||height_unit=="in"||height_unit=="ft"||height_unit=="yd"||height_unit=="mi"||height_unit=="km" )
			break;
		else
			cout << endl << "\t Invalid unit entry.  Please try again";
	}
	while(true)
	{
		cout << endl << "Which units were used to measure the distance to where you want to be able to see: ";
		cin >> distance_unit;
		if(distance_unit=="m"||distance_unit=="in"||distance_unit=="ft"||distance_unit=="yd"||distance_unit=="mi"||distance_unit=="km")
			break;
		else
			cout << endl << "\t Invalid unit entry.  Please try again";
	}
	cout << endl << endl;
	while(true)
	{
		cout << endl << "Which units do you want the minimal height of structure to be: ";
		cin >> Height_unit;
		if(Height_unit=="m"||Height_unit=="in"||Height_unit=="ft"||Height_unit=="yd"||Height_unit=="mi"||Height_unit=="km")
			break;
		else
			cout << endl << "\t Invalid unit entry.  Please try again";
	}
	while(true)
	{
		cout << endl << "Which units do you want the distance to the horizon to be: ";
		cin >> Distance_unit;
		if(Distance_unit=="m"||Distance_unit=="in"||Distance_unit=="ft"||Distance_unit=="yd"||Distance_unit=="mi"||Distance_unit=="km")
			break;
		else
			cout << endl << "\t Invalid unit entry.  Please try again";
	}
	
	cout << endl << endl << "Enter the value of your height (" << height_unit << ") : ";
	cin >> height;
	cout << endl << "Enter the value of the distance you want to be able to see (" << distance_unit << ") : ";
	cin >> distance;

	// CONVERT UNITS OF INITIAL INPUTS INTO METERS FOR CALCULATIONS //
		
	if(height_unit == "m")
		cout << endl << "Standard Units Chosen for Height of Observer";
	else if(height_unit == "in")
		height = InchesTo.Meters(height);
	else if(height_unit == "ft")
		height = FeetTo.Meters(height);
	else if(height_unit == "yd")
		height = YardsTo.Meters(height);
	else if(height_unit == "mi")
		height = MilesTo.Meters(height);
	else if(height_unit == "km")
		height = KilometersTo.Meters(height);
	else
	{
		cout << endl << "\t\t UNIT ERROR";
		return 0;
	}
	// ------------------------------------------- //
	if(distance_unit == "m")
		cout << endl << "Standard Units Chosen for Distance";
	else if(distance_unit == "in")
		distance = InchesTo.Meters(distance);
	else if(distance_unit == "ft")
		distance = FeetTo.Meters(distance);
	else if(distance_unit == "yd")
		distance = YardsTo.Meters(distance);
	else if(distance_unit == "mi")
		distance = MilesTo.Meters(distance);
	else if(distance_unit == "km")
		distance = KilometersTo.Meters(distance);
	else
	{
		cout << endl << "\t\t UNIT ERROR";
		return 0;
	}						
	
	// SET THE VARIABLES FOR CALCULATIONS //
	
	CCO.setHeight(height);
	CCO.setDistance(distance);
	//CCO.setRadius(radius);
	
	double HorizonDistance = CCO.Solve_S(); // Distance to the Horizon in meters
	double SightLineDistance = CCO.Solve_d0(); // Distance from eyes to horizon (sight line) in meters
	double MinHeight = CCO.Solve_H(); // Minimum height required of some structure to be seen from given observer height and distance away
	double HorizonDrop = RadianToDegree( CCO.Solve_Alpha() ); // Angle that is required to look down (straight) toward the horizon
	
	// CONVERT UNITS OF OUTPUTS INTO DESIRED UNITS SET BY THE USER //
	
	if(Height_unit == "m")
		cout << endl << "Standard Units Chosen for Minimum Height of Structure";
	else if(Height_unit == "in")
		MinHeight = MetersTo.Inches(MinHeight);
	else if(Height_unit == "ft")
		MinHeight = MetersTo.Feet(MinHeight);
	else if(Height_unit == "yd")
		MinHeight = MetersTo.Yards(MinHeight);
	else if(Height_unit == "mi")
		MinHeight = MetersTo.Miles(MinHeight);
	else if(Height_unit == "km")
		MinHeight = MetersTo.Kilometers(MinHeight);
	else
	{
		cout << endl << "\t\t UNIT ERROR";
		return 0;
	}
	// ------------------------------------------- //
	if(Distance_unit == "m")
		cout << endl << "Standard Units Chosen for Horizon Distance";
	else if(Distance_unit == "in")
		{HorizonDistance = MetersTo.Inches(HorizonDistance); SightLineDistance = MetersTo.Inches(SightLineDistance);}
	else if(Distance_unit == "ft")
		{HorizonDistance = MetersTo.Feet(HorizonDistance); SightLineDistance = MetersTo.Feet(SightLineDistance);}
	else if(Distance_unit == "yd")
		{HorizonDistance = MetersTo.Yards(HorizonDistance); SightLineDistance = MetersTo.Yards(SightLineDistance);}
	else if(Distance_unit == "mi")
		{HorizonDistance = MetersTo.Miles(HorizonDistance); SightLineDistance = MetersTo.Miles(SightLineDistance);}
	else if(Distance_unit == "km")
		{HorizonDistance = MetersTo.Kilometers(HorizonDistance); SightLineDistance = MetersTo.Kilometers(SightLineDistance);}
	else
	{
		cout << endl << "\t\t UNIT ERROR";
		return 0;
	}
	
	// OUTPUT CALCULATIONS TO TERMINAL FOR THE USER //
	
	cout << endl << endl << endl << "/**********************************************************************/"
		<< endl << "\t\t CALCULATIONS: ";
	
	cout << endl << "\t Distance to the horizon: " << HorizonDistance << " " << Distance_unit
		<< endl << "\t Sight line distance: " << SightLineDistance << " " << Distance_unit;
		
		if( CCO.Solve_S() < distance )
			cout << endl << "\t Minimum height of object needed to be seen by observer: " << MinHeight << " " << Height_unit;
		else
		  cout << endl << "\t Minimum height of object needed to be seen by observer: " << 0 << " " << Height_unit << " (Object is not beyond the horizon)";
				
	cout << endl << "\t Angle of horizon drop: " << HorizonDrop << " degrees"
		<< endl << "/**********************************************************************/" << endl << endl;
		
	return 0;
}
