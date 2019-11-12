#ifndef BIKE_H
#define BIKE_H
#include "vehicle.h"

class bike : public vehicle{
	private:
		char* bike_name;
		int bike_number;
	public:
		bike();
		bike(int wn, int ms);
		bike(int wn, int ms, char* bn);
		bike(int wn, int ms, char* bn, int bnum);
		bike(int wn, int ms, char* bn, int bnum, bool hn);
		int get_bike_number();
		char* get_bike_name();
		const char* get_class_name();
		void set_bike_name(char* bn);
		void set_bike_number(int bnum);

};
#endif
