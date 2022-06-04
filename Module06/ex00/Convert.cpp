/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 16:40:45 by agarzon-          #+#    #+#             */
/*   Updated: 2022/06/04 16:52:35 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(std::string const &s): _str(s){
	
	this->_dot = 0;
	this->_errors[0] = "";
	this->_errors[1] = "";
	this->_errors[2] = "";
	this->_errors[3] = "";
	this->_nan = 0;
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

bool Convert::isNumericParseable(const std::string &s){
	int i = 0;
	int len =  static_cast<int>(s.length());
	std::string type = "";

	if (s == "nanf" || s == "inff" || s == "+inff" || s == "-inff"){
		this->_errors[0] = "imposible";
		this->_errors[1] = "imposible";
		this->_nan = 1;
		this->_fValue = std::atof(s.c_str());
		this->_dValue = static_cast<double>(this->_fValue);
		return false;
	}
	if (s == "nan" || s == "inf" || s == "+inf" || s == "-inf"){
		this->_errors[0] = "imposible";
		this->_errors[1] = "imposible";
		this->_nan = 1;
		this->_dValue = std::atof(s.c_str());
		this->_fValue = static_cast<float>(this->_dValue);
		return false;
	}

	if(s[0] == '-' || s[0] == '+')
		i++;

	for(; i < len; i++){
		if((s[i] == '.' || s[i] == ',')
			&& (i < len - 1 && std::isdigit(s[i+1]))){
			type = "double";
			this->_dot = 1;
		}
		else if (i < len - 1 &&  s[i] == 'e' &&
				(s[i+1] == '+' || s[i+1] == '-' ||
				 std::isdigit(s[i+1]))){
			i++;
			type = "double";
		}
		else if (s[i] == 'f' && i == len - 1 && type == "double"){
			type = "float";
			this->_errors[0] = "imposible";
			this->_errors[1] = "imposible";
		}
		else if(!std::isdigit(s[i]))
			type = "invalid";
	}

	if (type == "invalid"){
		this->_errors[0] = "imposible";
		this->_errors[1] = "imposible";
		this->_errors[2] = "imposible";
		this->_errors[3] = "imposible";
		return false;
	}
	if (type == "float"){
		this->_errors[0] = "imposible";
		this->_errors[1] = "imposible";
		this->_fValue = std::atof(s.c_str());
		this->_dValue = static_cast<double>(this->_fValue);
		return false;
	}
	if (type == "double"){
		this->_errors[0] = "imposible";
		this->_errors[1] = "imposible";
		this->_dValue = std::atof(s.c_str());
		this->_fValue = static_cast<float>(this->_dValue);
		return false;
	}

	this->_dValue = std::atof(s.c_str());
	return true;
}

bool Convert::isAChar(const std::string &s) const{
	if (s.length() != 1 || std::isdigit(s[0]))
		return false;
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

std::string Convert::getErrors(int n) const{
	return this->_errors[n];
}

void Convert::convert(){
	
	if (Convert::isAChar(this->_str)){
		this->_cValue = this->_str[0];
		this->_iValue = static_cast<int>(this->_cValue);
		this->_fValue = static_cast<float>(this->_cValue);
		this->_dValue = static_cast<double>(this->_cValue);
		return;
	}

	if (!isNumericParseable(this->_str))
		return;

	if (this->_dValue >= 0 && this->_dValue <= 127){
		if (this->_dValue >= 33 && this->_dValue <= 126)
			this->_cValue = static_cast<char>(this->_dValue);
		else
			this->_errors[0] = "Non displayable";
	}
	else
		this->_errors[0] = "imposible";

	if (this->_dValue > std::numeric_limits<int>::max() || 
		this->_dValue <  std::numeric_limits<int>::min()){
		this->_errors[1] = "imposible";
		this->_dot = 0;
	}
	else
		this->_iValue = static_cast<int>(this->_dValue);
	
		this->_fValue = static_cast<float>(this->_dValue);
		this->_dValue = static_cast<double>(this->_dValue);
}

std::ostream &operator<<(std::ostream &out, Convert const &other){
	std::string error;
	out << "char: ";
	if(other.getErrors(0) == "")
		out << other.getChar();
	else{
		out << other.getErrors(0);
	}
	out << "\nint: ";
	if(other.getErrors(1) == "")
		out << other.getInt();
	else
		out << other.getErrors(1);
	out << "\nfloat: ";
	if(other.getErrors(2) == ""){
		out << other.getFloat();
		if (other.getDot() == 0 && other.getNan() == 0)
			out << ".0";
		out << "f";
	}
	else
		out << other.getErrors(2);
	out << "\ndouble: ";
	if(other.getErrors(3) == ""){
		out << other.getDouble();
		if (other.getDot() == 0 && other.getNan() == 0)
			out << ".0";
	}
	else
		out << other.getErrors(3);
	out << "\n";
	return out;
}
