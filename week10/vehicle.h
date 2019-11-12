#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>

class vehicle {
	protected:
		bool has_name;
		int wheel_number;
		int max_speed;
	public:
		vehicle();
		vehicle(int wn, int ms);
		vehicle(int wn, int ms, bool hn);
		int get_wheel_number();
		int get_max_speed();
		bool get_has_name();
		const char* get_class_name();
		void set_wheel_number(int wn);
		void set_max_speed(int ms);
		void set_has_name(bool hn);
};
#endif
