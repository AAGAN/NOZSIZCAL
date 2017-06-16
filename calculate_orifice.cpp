#include "calculate_orifice.h"
#include <cmath>


/**
	calculates the orifice diameter based on the flow rate and upstream pressure
*/
int calculate_orifice(double delp, double Yfactor, double& DoRF, double sDensity, double ID, double QS, double& cOe1)
{
	delp = delp / 6895.0;
	sDensity = sDensity * 0.06243;
	ID = ID * 39.37008;
	QS = QS * 2.2046;
	DoRF = DoRF * 39.37008;


	double coe = 0.68;
	while (true)
	{
		double DSQ = QS / (0.525 * Yfactor * coe * std::sqrt(sDensity * delp));
		DoRF = std::sqrt(DSQ);
		double beTa = DoRF / ID;
		if (beTa >= 1.0)
		{
			DoRF = ID;
			break;
		}
		cOe1 = 1.2875 * (0.52299 + 0.63301 * beTa - 1.7093 * std::pow(beTa, 2.0) + 1.65 * std::pow(beTa, 3.0));
		if (ID >= 0.54 && ID < 0.63) cOe1 = cOe1 *0.955;
		if (ID < 0.54 && ID >= 0.4) cOe1 = cOe1*0.95;
		if (ID < 0.4) cOe1 = cOe1 * 0.935;
		cOe1 = cOe1 * 0.85;

		double COeDif = (coe - cOe1) / cOe1;
		if (std::abs(COeDif) <= 0.0012) break;
		coe = (coe + cOe1) / 2.0;
	}

	return 0;
}