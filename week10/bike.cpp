#include "bike.h"

bike::bike():vehicle() {
	this->bike_name = nullptr;
	this->bike_number = -1;
}

bike::bike(int wn, int ms):vehicle(wn, ms) {
}

bike::bike(int wn, int ms, char* bn):vehicle(wn, ms) {
	this->bike_name = bn;
}

bike::bike(int wn, int ms, char* bn, int bnum):vehicle(wn, ms) {
	this->bike_name = bn;
	this->bike_number = bnum;
}

bike::bike(int wn, int ms, char* bn, int bnum, bool hn):vehicle(wn, ms, hn) {
	this->bike_name = bn;
	this->bike_number = bnum;
}

int bike::get_bike_number() {
	return this->bike_number;
}

char* bike::get_bike_name() {
	return this->bike_name;
}

const char* bike::get_class_name() {
	return "bike";
}

void bike::set_bike_name(char* bn) {
	this->bike_name = bn;
}

void bike::set_bike_number(int bnum) {
	this->bike_number = bnum;
}
