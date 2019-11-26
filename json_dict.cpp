#include "json_object.h"
#include "json_dict.h"
#include "json_list.h"
#include "data/Integer.h"
#include "data/String.h"

int json_object::_index = 0;

void json_dict::put(json_object* key, json_object* val) {
	v.push_back({ key, val });
}

int json_dict::find(json_object* key) {
}

json_dict::json_dict() {
}

json_object* json_dict::parse(const char* str, int length) {
}

json_object* json_dict::operator[](json_object* key) const {
	if(key->type() == json_object::STRING) {
		return operator[](key->to_string());
	}
	else if(key->type() == json_object::INT) {
		return operator[](atoi(key->to_string().c_str()));
	}
	return;
}

json_object* json_dict::operator[](const std::string& key) const {
}

json_object* json_dict::operator[](int key) const {
}

json_object::_type json_dict::type() {
	return json_object::DICT;
}

std::string json_dict::to_string() {
	std::string retValue = "";
	if(v.size() == 0) {
		return "{}";
	}
	else {
		retValue += "{";
		for(int i = 0; i < v.size() - 1; i++) {
			retValue += v.first->to_string();
			retValue += " : ";
			retValue += v.second->to_string();
			retValue += ", ";
		}
		retValue += v[v.size() - 1].first->to_string;
		retValue += " : ";
		retValue += v[v.size() - 1].second->to_string;
		retValue += "" + "}";
		return retValue;
	}
}
