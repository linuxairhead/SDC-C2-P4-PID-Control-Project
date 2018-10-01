#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

/**
 * Initialize PID.
 * @param kp the proportional value for PID controller
 * @param ki the integral value for PID controller
 * @param kd the derivative value for PID controller
 */
void PID::Init(double kp, double ki, double kd) {
	p_error = 0;
	i_error = 0;
	d_error = 0;

	Kp = kp;
	Ki = ki;
	Kd = kd;
}

void PID::UpdateError(double cte) {
}

double PID::TotalError() {
}

