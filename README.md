# FlatEarthDebunking
Pretty much a Curvature Calculator
This was made back in 2019 for fun (and to help settle a dispute) and I figured that others can use it as well, even though I think there are plenty of other tools out there that can do similar things to this.
Given the rotundity of the Earth, this allows the user to determine if they can see an object on the Earth or not based on the height of the observer above the surface of the Earth and the distance of the object in question from the observer.  These are purely geometrical arguments with the apporiximation that the Earth is a perfect sphere and not a lumpy spheroid.  It also doesn't factor in weather, temperature gradients, etc...
# Instructions 
After cloning the repo, simply open a terminal and type `make` while in the directory.  If all goes well, there will now be an executable file to run.  Run this executable in the terminal and it will ask for user input to perform the calculation.  It will tell you the distance to the observer's horizon, both along the ground and the straight "sight line" distance from the observer's eyes to the horizon.  It will also tell you the minimum height of the object that you want to see if the object is further than your apparent horizon.  
# Bonus
By default, the calculations are using the radius of the Earth as a parameter.  For fun, the user can also use whatever radius they want (defined in meters).  Simply find the necessary line (line 38), uncomment it (delete the // marks) and change that value to whatever radius you want!  Then, save the change and again type `make` in the terminal.  
