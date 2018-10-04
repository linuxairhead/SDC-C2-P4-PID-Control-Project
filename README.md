# Controls PID Project
Self-Driving Car Engineer Nanodegree Program
* The purpose of this project is using PID (Proportional Integral Differential) controllers give steering command to drive the car around the simulator track

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./pid`. 

## PID Basic Concept
* PID Steering = - tau_p * CTE - tau_d * diff_CTE - tau_i * int_CTE
	* P (Proportional)
		* Current Steer value in proportion to the crosstrack error
		* - tau_p * CTE

	* I (Integral)
		* Past Steer value
		* - tau_i * int_CTE
		* int_CTE can calculate by adding all previous CTE

	* D (Differential)
		* Future Steer value
		* - tau_d * diff_CTE
		* diff_CTE can calculate by subtracting current CTE by previous CTE

* PID parameter used for steering angle.

	| Parameter Type |  Value  |
	|:--------------:|:-------:|
	|     P value    |   0.05  |
	|     i value    |  0.0005 |
	|     d value    |   2.75  |

* How to tune the parameters
I tune the parameter manually. Initially I initialized the P, I, D value with 0.1, 0.1, 0.1, then I adjusted one by one started with P.
