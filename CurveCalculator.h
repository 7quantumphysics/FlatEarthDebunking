#ifndef CURVECALCULATOR_
#define CURVECALCULATOR_

class CurveCalculator
{
	public:
		CurveCalculator(); // Constructor (Default radius of planet is radius of Earth)
		
		void setHeight(double& h); // Takes input from user and declares height given
		void setDistance(double& d); // Takes input from user and declares distance that wants to be seen away from observer
		void setRadius(double& r); // Takes a set value of radius of a sphere which observations are being made with
		
		double Solve_S();
		double Solve_H();
		double Solve_d0();
		double Solve_Alpha();
		
	private:
		double S_; // Distance to observer's horizon
		double H_; // Minimum height of object beyond horizon
		double d0_; // Linear distance from observer's eyes to horizon (sight line)
		double Psi_; // Angle between observer and sight line
		double Alpha_; // Angle that the horizon has appeared to drop from a perpendicular sight line of observer
		
		double R_; // Radius of the Earth (in meters)
		double h0_; // Height of the observer (distance of the observer's "eyes" from the surface of the Earth)
		double D_; // Distance to object which observer wants to see
};

#endif //CURVECALCULATOR_
