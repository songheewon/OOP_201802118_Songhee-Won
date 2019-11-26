#include "json_object.h"
#include "json_dict.h"
#include "json_list.h"
#include "data/Integer.h"
#include "data/String.h"

int json_object::_index = 0;

json_object* json_object::parse(const char* str, int length) {
	json_object* tempStr = NULL;
	while(_index < length) {
		switch(str[_index]) {
			case '{':
				tempStr = json_dict::parse(str, length);
				_index++;
				break;
			case '[':
				tempStr = json_list::parse(str, length);
				_index++;
				break;
			case '\'':
				tempStr = String::parse(str, length, '\'');
				_index++;
				break;
			case '\"':
				tempStr = String::parse(str, length, '\"');
				_index++;
				break;
			default:
				if(str[_index] >= 48 && str[_index] <= 57) {
					tempStr = Integer::parse(str, length);
				}
		}
		_index++;
	}
	_index = 0;
	return tempStr;
}

json_object* json_object::parse(const std::string& str) {
	return parse(str.c_str(), str.length());
}
