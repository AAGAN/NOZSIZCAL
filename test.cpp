#include <iostream>
#include <assert.h>
#include "calculate_orifice.h"

int main()
{
    // calculate_orifice() calculates flow coefficient for square edged orifice discharge nozzzle by itteration
    // double deltaP = pressure difference (Pa)
    // double Yfactor = expansion factor
    // double density = density at the end of the pipe section (kg/m^3)
    // double pipe_internal_diameter = internal diameter of the feeding pipe (m)
    // double MFR = mass flow rate (kg/s)
    // double orifice_diameter = diameter of the orifice (m)
    // double flow_coeff = orifice flow coefficient
	double deltaP = 0.0;
	double Yfactor = 0.0;
	double orifice_diameter = 0.0;
	double density = 0.0;
	double pipe_internal_diameter = 0.0;
	double MFR = 0.0;
	double flow_coeff = 0.0;

    /*calculate_orifice(deltaP = 0.0, Yfactor = 0.0, orifice_diameter = 0.0, density = 0.0, pipe_internal_diameter = 0.0, MFR = 0.0, flow_coeff = 0.0);
    std::cout << "deltaP = " << deltaP << std::endl
            << "Yfactor = " << Yfactor << std::endl
            << "orifice_diameter = " << orifice_diameter << std::endl
            << "density = " << density << std::endl
            << "pipe_internal_diameter = " << pipe_internal_diameter << std::endl
            << "mass flow rate = " << MFR << std::endl
            << "flow_coeff" << flow_coeff << std::endl << std::endl;*/
            
    calculate_orifice(deltaP = 10000.0, Yfactor = 0.9, orifice_diameter = 0.0, density = 10.0, pipe_internal_diameter = 0.02, MFR = 5.0, flow_coeff = 0.0);
    std::cout << "deltaP = " << deltaP << std::endl
            << "Yfactor = " << Yfactor << std::endl
            << "orifice_diameter = " << orifice_diameter << std::endl
            << "density = " << density << std::endl
            << "pipe_internal_diameter = " << pipe_internal_diameter << std::endl
            << "mass flow rate = " << MFR << std::endl
            << "flow_coeff = " << flow_coeff << std::endl << std::endl;
            
    return 0;
}
