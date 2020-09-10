/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 16:40:45 by agarzon-          #+#    #+#             */
/*   Updated: 2020/09/10 17:31:19 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(std::string const &s): _str(s){
	this->_dot = 0;
	this->_errors[0] = "";
	this->_errors[1] = "";
	this->_errors[2] = "";
	this->_errors[3] = "";
}

Convert::~Convert(){

}

Convert::Convert(Convert const &other){
	this->_str = other._str;
	this->_dot = other._dot;
	this->_errors[0] = other._errors[0];
	this->_errors[1] = other._errors[1];
	this->_errors[2] = other._errors[2];
	this->_errors[3] = other._errors[3];
}

Convert &Convert::operator=(Convert const &other){
	this->_str = other._str;
	this->_dot = other._dot;
	this->_errors[0] = other._errors[0];
	this->_errors[1] = other._errors[1];
	this->_errors[2] = other._errors[2];
	this->_errors[3] = other._errors[3];
	
	return *this;
}

bool Convert::isAInt(const std::string &s) const{
	int i = 0;
	if(s[0] == '-' || s[0] == '+')
		i++;
	for(; i < s.length(); i++)
		if(!std::isdigit(s[i]))
			return false;
	return true;
}

bool Convert::isAChar(const std::string &s) const{
	if (s.length() != 1 || std::isdigit(s[0]))
		return false;
	return true;
}

bool Convert::isAFloat(const std::string &s){
	int i = 0;
	this->_dot = 0;
	this->_nan = 0;

	if (s == "nanf" || s == "inff" || s == "+inff" || s == "-inff"){
		this->_nan = 1;
		return true;
	}
	if (s[s.length() - 1] != 'f')
		return false;
	if (s[0] == '-' || s[0] == '+')
		i++;
	for(; i < s.length() - 1; i++){
		if(!std::isdigit(s[i])){
			if(s[i] == '.' || s[i] == ',')
				this->_dot = 1;
			else
				return false;
		}
	}
	return true;
}

bool Convert::isADouble(const std::string &s){
	int i = 0;
	this->_dot = 0;
	this->_nan = 0;

	if (s == "nan" || s == "inf" || s == "+inf" || s == "-inf"){
		this->_nan = 1;
		return true;
	}
	if (s[0] == '-' || s[0] == '+')
		i++;
	for(; i < s.length(); i++){
		if(!std::isdigit(s[i])){
			if(s[i] == '.' || s[i] == ',')
				this->_dot = 1;
			else
				return false;
		}
	}
	return true;

}

int Convert::getInt() const{
	return this->_iValue;
}

char Convert::getChar() const{
	return this->_cValue;
}

float Convert::getFloat() const{
	return this->_fValue;
}

double Convert::getDouble() const{
	return this->_dValue;
}

std::string Convert::getStr() const{
	return this->_str;
}

int Convert::getDot() const{
	return this->_dot;
}

int Convert::getNan() const{
	return this->_nan;
}

void Convert::convert(){
	if (Convert::isAChar(this->_str)){
		this->_cValue = this->_str[0];
		this->_iValue = static_cast<int>(this->_cValue);
		this->_fValue = static_cast<float>(this->_cValue);
		this->_dValue = static_cast<double>(this->_cValue);
	}
	else if(Convert::isAInt(this->_str)){
		this->_iValue = std::atoi(this->_str.c_str());
		this->_cValue = static_cast<char>(this->_iValue);
		this->_fValue = static_cast<float>(this->_iValue);
		this->_dValue = static_cast<double>(this->_iValue);
	}
	else if (Convert::isAFloat(this->_str)){
		this->_fValue = std::atof(this->_str.c_str());
		this->_cValue = static_cast<char>(this->_fValue);
		this->_iValue = static_cast<int>(this->_fValue);
		this->_dValue = static_cast<double>(this->_fValue);
	}
	else if (Convert::isADouble(this->_str)){
		this->_dValue = std::strtod(this->_str.c_str(), NULL);
		this->_cValue = static_cast<char>(this->_dValue);
		this->_iValue = static_cast<int>(this->_dValue);
		this->_fValue = static_cast<float>(this->_dValue);
	}
	else{
		for (int i = 0; i < 4; i++)
			this->_errors[i] = "imposible";
		return ;
	}
	if (this->_nan == 1){
		this->_errors[0] = "imposible";
		this->_errors[1] = "imposible";
		return ;
	}
	if ((this->_cValue >= 0 && this->_cValue <= 32) || this->_cValue == 127)
		this->_errors[0] = "Non displayable";
	else if(this->_cValue < 0 || this->_cValue > 127)
		this->_errors[0] = "imposible";
	if(this->_dValue > std::numeric_limits<int>::max() ||
		this->_dValue < std::numeric_limits<int>::min()){
		this->_errors[0] = "imposible";
		this->_errors[1] = "imposible";
	}
}

std::ostream &operator<<(std::ostream &out, Convert const &other){
	out << "char: ";
	if(other.getNan() == 1)
		out << "imposible\nint: ";
	else if ((other.getChar() >= 0 && other.getChar() <= 32) || other.getChar() == 127)
		out << "Non displayable\nint: ";
	else if(other.getChar() < 0 || other.getChar() > 127)
		out << "imposible\nint: ";
	else
		out << other.getChar() << "\nint: ";

	if(other.getInt() > std::numeric_limits<int>::max() ||
		other.getInt() < std::numeric_limits<int>::min())
		out << "imposible\nfloat: ";
	else if(other.getNan() == 1)
		out << "imposible\nfloat: ";
	else
		out << other.getInt() << "\nfloat: ";

	if (other.getDot() == 0 && other.getNan() != 1)
		out << other.getFloat() << ".0f\ndouble: ";
	else if(other.getNan() == 1)
		out << other.getFloat() << "f\ndouble: ";
	else
		out << other.getFloat() << "f\ndouble: ";

	if (other.getDot() == 0 && other.getNan() != 1)
		out << other.getDouble() << ".0\n";
	else if(other.getNan() == 1)
		out << other.getDouble() << "\n";
	else
		out << other.getDouble() << "\n";
	
	return out;
}


