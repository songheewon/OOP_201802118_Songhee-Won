#include "json_object.h"
#include "json_dict.h"
#include "json_list.h"
#include "data/Integer.h"
#include "data/String.h"

json_list::json_list() {
	v = std::vector<json_object*>();
}

json_object* json_list::parse(const char* str, int length) {
	int& index = _index;
	json_list* tempList = new json_list();
	json_object* tempStr = NULL;
	while(index < length) {
		switch(str[index]) {
		}
	}		
}

json_object* operator[](int key) const {
	return v[key];
}

json_object::_type json_list::type() {
	return json_object::LIST;
}

std::string json_list::to_string() {
	std::string retValue = "";
	if(v.size() == 0) {
		return "[]";
	}
	else {	
		retValue += "[";
		for(int i = 0; i < v.size() - 1; i++) {
			retValue += v[i]->to_string;
			retValue += ", ";
		}
		retValue += v[v.size() - 1]->to_string;
		retValue += "" + "]";
		return retValue;
	}	
}
