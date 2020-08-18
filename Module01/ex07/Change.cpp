/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Change.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarzon- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 20:13:55 by agarzon-          #+#    #+#             */
/*   Updated: 2020/08/18 13:00:19 by agarzon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Change.hpp"
#include <iostream>
Change::Change(){
}

Change::~Change(){
}

bool Change::textRead(std::string filename, std::string s1, std::string s2){
	std::ifstream text;
	std::ofstream out;
	std::string s;

	text.open(filename, std::ios::in);
	if (!text){
		text.close();
		return false;
	}
	out.open(filename +".replace", std::ios::out | std::ios::trunc);
	if (!out){
		out.close();
		return false;
	}
	while (std::getline(text, s)) {
		out << Change::swapText(s, s1, s2);
		if (!text.eof()){
			if (s1 == "\n")
				out << s2;
			else
				out << '\n';
		}
	}
	text.close();
	out.close();
	return true;
}

std::string Change::swapText(std::string line, std::string s1, std::string s2){
	size_t len;
	size_t count;
	std::stringstream st;

	len = s1.length();
	for(int i = 0; i < line.length(); i++){
		count = 0;
		while (line[i + count] == s1[count] && count < len)
			count++;
		if (count == len){
			st << s2;
			i += (count -1);
		}
		else
			st << line[i];
	}
	return st.str();
}

